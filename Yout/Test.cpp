#define BOOST_TEST_MODULE CalcTest
#include <boost/test/included/unit_test.hpp>
#include "Math.h"

BOOST_AUTO_TEST_CASE(test_sum) {
    BOOST_CHECK(sum(4, 3) == 7);
}

BOOST_AUTO_TEST_CASE(test_sub) {
    BOOST_CHECK(sub(3, 1) == 2);
}

BOOST_AUTO_TEST_CASE(test_mul) {
    BOOST_CHECK(mul(7, 3) == 21);
}

BOOST_AUTO_TEST_CASE(test_division) {
    BOOST_CHECK(division(26, 2) == 13);
}

BOOST_AUTO_TEST_CASE(test_power) {
    BOOST_CHECK(powe(2, 5) == 32);
}
