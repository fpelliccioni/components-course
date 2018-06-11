//! \file benchmark/first.hpp
// Components-Course
//
// Copyright Fernando Pelliccioni 2016-2018
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <cstdlib>
#include <chrono>
#include <iostream>
#include <random>
#include <tuple>

// #include <course/benchmark/instrumented.hpp>
#include <course/removethisfile.hpp>


int main() {
    using namespace std;
    using namespace std::chrono;
    using namespace course;

    auto start = high_resolution_clock::now();
    add(1, 2);
    auto stop = high_resolution_clock::now();

    auto time = duration_cast<nanoseconds>(stop - start);
    cout << fixed;
    cout << "execution time: " << time.count() << endl; //TODO(fernando): endl

    return 0;
}
