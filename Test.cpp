/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Josef Sokolov>
 *
 * Date: 2021-04
 */

#include "doctest.h"
#include "Matrix.hpp"

using namespace zich;



TEST_CASE("Good Input"){
  
    std::vector<double> identity1 = {5, 0, 0, 0, 5, 0, 0, 0, 5};
    std::vector<double> identity2 = {7, 0, 0, 0, 7, 0, 0, 0, 7};

    zich::Matrix matrx_a{identity1,3,3};
    zich::Matrix matrx_b{identity2,3,3};



    CHECK((matrx_a+matrx_b) == matrx_a);
    CHECK((matrx_a+matrx_b) == matrx_a);
    CHECK((matrx_a+matrx_b) == matrx_a);
    CHECK((matrx_a+matrx_b) == matrx_a);
    CHECK((matrx_a+matrx_b) == matrx_a);
    CHECK((matrx_a+matrx_b) == matrx_a);
    CHECK((matrx_a+matrx_b) == matrx_a);
    CHECK((matrx_a+matrx_b) == matrx_a);
    CHECK((matrx_a+matrx_b) == matrx_a);
    CHECK((matrx_a+matrx_b) == matrx_a);
}

TEST_CASE("Bad Input"){

    std::vector<double> identity1 = {2, 0, 0, 0, 2, 0, 0, 0, 2};
    std::vector<double> identity2 = {4, 0, 0, 0, 4, 0, 0, 0, 4};

    zich::Matrix matrx_a{identity1,3,3};
    zich::Matrix matrx_b{identity2,7,3};


    CHECK_THROWS(matrx_b+matrx_a);
    CHECK_THROWS(matrx_a+matrx_b);
    CHECK_THROWS(matrx_b+matrx_a);
    CHECK_THROWS(matrx_a+matrx_b);
    CHECK_THROWS(matrx_b+matrx_a);
    CHECK_THROWS(matrx_a+matrx_b);
    CHECK_THROWS(matrx_b+matrx_a);
    CHECK_THROWS(matrx_a+matrx_b);
    CHECK_THROWS(matrx_b+matrx_a);
    CHECK_THROWS(matrx_a+matrx_b);
}


