//! \file course/utility.hpp
// Components-Course
//
// Copyright Fernando Pelliccioni 2016-2018
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef COURSE_UTILITY_HPP_
#define COURSE_UTILITY_HPP_

#include <utility>      //std::swap

#include <course/concepts.hpp>

namespace course { 

template <Semiregular T>
inline
void swap(T& x, T& y) {
    //postcondition: old_x == y && old_y == x
    //complexity:    1 move (or copy) construction, 2 move (or copy) assignments.
    T tmp(std::move(x));
    x = std::move(y);
    y = std::move(tmp);
}

} //namespace course

#endif /*COURSE_UTILITY_HPP_*/

#ifdef DOCTEST_LIBRARY_INCLUDED

using namespace course;

TEST_CASE("[swap] testing swap postcondition") {
    int a = 1;
    int b = 2;
    swap(a, b);     //should be the same as swap(b, a);
    CHECK(a == 2);
    CHECK(b == 1);
}

#endif /*DOCTEST_LIBRARY_INCLUDED*/
