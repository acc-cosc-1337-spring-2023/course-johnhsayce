#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "data_types.h"
//Two test cases for multiply_numbers function
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
//first test case multiply 5 by 10(num1), should be 50
//second test case multiply 5 x 2(num1) should be 10
TEST_CASE("Verify multiply_numbers function") 
{
	REQUIRE(multiply_numbers(10) == 50);
	REQUIRE(multiply_numbers(2) == 10);
}

