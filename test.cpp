#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE( "Checks the sign", "[Sign Checker]" ) {
    REQUIRE( Sign(1) == 1 );
    REQUIRE( Sign(-2) == -1 );
    REQUIRE( Sign(0) == 0 );
    REQUIRE( Sign(-30) == -1 );
}

TEST_CASE( "Divides by 2 until you can't anymore", "[RemoveTwos]" ) {
    REQUIRE( RemoveTwos(10) == 5 );
    REQUIRE( RemoveTwos(4) == 1 );
    REQUIRE( RemoveTwos(30) == 15 );
    REQUIRE( RemoveTwos(16) == 1 );
}

TEST_CASE( "Returns vector that is true in place of even numbers and false in place of odd numbers", "[EvenMask]" ) {
    std::vector<int> test = {2,3};
    std::vector<bool> result = {true,false};
    REQUIRE( EvenMask(test) == result );
}

TEST_CASE( "Sums all numbers in a vector and returns the resulting value", "[Sum]" ) {
    std::vector<int> one = {2,3,4};
    std::vector<int> two = {1,2};
    std::vector<int> three = {4,4,4};
    std::vector<int> four = {2,3};
    REQUIRE( Sum(one) == 9 );
    REQUIRE( Sum(two) == 3 );
    REQUIRE( Sum(three) == 12 );
    REQUIRE( Sum(four) == 5 );
}