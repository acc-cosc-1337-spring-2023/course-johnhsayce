#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
class TicTacToe;
TicTacToe game1;
TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}
TEST_CASE("Game Over function")
 {
	REQUIRE(game1.game_over() == false);
}
