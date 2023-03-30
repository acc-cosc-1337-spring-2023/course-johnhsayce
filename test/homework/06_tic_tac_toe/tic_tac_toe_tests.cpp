#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"


TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

TEST_CASE("Tests first player is set to  X")
 {
	TicTacToe game1;
	string player = "X";
	game1.start_game(player);
	REQUIRE(game1.get_player() == "X");
 }
TEST_CASE("Tests first player is set to O")
 {
	TicTacToe game1;
	string player = "O";
	game1.start_game(player);
	REQUIRE(game1.get_player() == "O");

 }
TEST_CASE("Test Tie with 9 board marks")
 {
	TicTacToe game1;
	string player = "X";
	bool tie = false;
	game1.start_game(player);

	game1.mark_board(1);
	game1.game_over();
	if(game1.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game1.mark_board(2);
	game1.game_over();
	if(game1.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game1.mark_board(3);
	game1.game_over();
	if(game1.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game1.mark_board(4);
	game1.game_over();
	if(game1.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game1.mark_board(6);
	game1.game_over();
	if(game1.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game1.mark_board(7);
	game1.game_over();
	if(game1.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game1.mark_board(8);
	game1.game_over();
	if(game1.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game1.mark_board(9);
	game1.game_over();
	if(game1.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game1.mark_board(5);
	game1.game_over();
	if(game1.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == true);
} 

TEST_CASE ("Test win by 1st column with Game Over function")
 {
	TicTacToe game1;
	string player = "X";
	game1.start_game(player);
	game1.mark_board(1);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(2);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(4);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(5);
	REQUIRE(game1.game_over() == false);	

	game1.mark_board(7);
	REQUIRE(game1.game_over() == true);
}

TEST_CASE("Test win by 2nd column with Game Over function")
 {
	TicTacToe game1;
	string player = "X";
	game1.start_game(player);
	game1.mark_board(2);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(1);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(5);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(4);
	REQUIRE(game1.game_over() == false);	

	game1.mark_board(8);
	REQUIRE(game1.game_over() == true);
		
 }
 TEST_CASE("Test win by 3rd column with Game Over function")
 {
	TicTacToe game1;
	string player = "X";
	game1.start_game(player);
	game1.mark_board(3);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(1);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(6);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(2);
	REQUIRE(game1.game_over() == false);	

	game1.mark_board(9);
	REQUIRE(game1.game_over() == true);
		
 }
 TEST_CASE("Test win by 1st Row with Game Over function")
 {
	TicTacToe game1;
	string player = "X";
	game1.start_game(player);
	game1.mark_board(1);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(4);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(2);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(5);
	REQUIRE(game1.game_over() == false);	

	game1.mark_board(3);
	REQUIRE(game1.game_over() == true);
		
 }
 TEST_CASE("Test win by 2nd Row with Game Over function")
 {
	TicTacToe game1;
	string player = "X";
	game1.start_game(player);
	game1.mark_board(4);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(1);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(5);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(2);
	REQUIRE(game1.game_over() == false);	

	game1.mark_board(6);
	REQUIRE(game1.game_over() == true);
		
 }
 TEST_CASE("Test win by 3rd Row with Game Over function")
 {
	TicTacToe game1;
	string player = "X";
	game1.start_game(player);
	game1.mark_board(7);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(4);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(8);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(5);
	REQUIRE(game1.game_over() == false);	

	game1.mark_board(9);
	REQUIRE(game1.game_over() == true);
		
 }
 TEST_CASE("Test win diagonally from top left with Game Over function")
 {
	TicTacToe game1;
	string player = "X";
	game1.start_game(player);
	game1.mark_board(1);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(2);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(5);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(3);
	REQUIRE(game1.game_over() == false);	

	game1.mark_board(9);
	REQUIRE(game1.game_over() == true);
		
 }
 TEST_CASE("Test win diagonally from bottom left with Game Over function")
 {
	TicTacToe game1;
	string player = "X";
	game1.start_game(player);
	game1.mark_board(3);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(1);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(5);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(2);
	REQUIRE(game1.game_over() == false);	

	game1.mark_board(7);
	REQUIRE(game1.game_over() == true);
		
 }