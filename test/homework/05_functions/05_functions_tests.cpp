#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify GC content") 
{
	REQUIRE(get_gc_content("AGCTATAG") == 0.375);
	REQUIRE(get_gc_content("CGCTATAG") == 0.5);
}
TEST_CASE("Verify reverse string content") 
{
	REQUIRE(reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(reverse_string("CGCTATAG") == "GATATCGC");
}
TEST_CASE("Verify reverse complement string content") 
{
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT[");
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG[");
}
