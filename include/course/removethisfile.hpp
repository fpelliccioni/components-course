//! \file course/removethisfile.hpp
// Components-Course
//
// Copyright Fernando Pelliccioni 2016-2018
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef COURSE_REMOVETHISFILE_HPP_
#define COURSE_REMOVETHISFILE_HPP_

namespace course { 

inline
int add(int x, int y) {
    return x + y;
}

} //namespace course

#endif /*COURSE_REMOVETHISFILE_HPP_*/

#ifdef DOCTEST_LIBRARY_INCLUDED

using namespace course;

TEST_CASE("[add] testing add") {
    CHECK(add(2, 2) == 4);
}

#endif /*DOCTEST_LIBRARY_INCLUDED*/
