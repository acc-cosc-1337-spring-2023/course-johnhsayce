#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"


TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

TEST_CASE("Tests correct win total history using manage.game winner totals")
 {
	TicTacToeManager manage;
	bool check;
	
	string x_o;
	
	//game1 X wins
	TicTacToe game;
	x_o="X";
	game.start_game(x_o);
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(4);
	game.mark_board(9);

    //game2 O wins
	x_o="O";
	game.start_game("O");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(4);
	game.mark_board(9);

	//game3 tie
	x_o="X";
	game.start_game(x_o);
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(8);
	game.mark_board(9);
	game.mark_board(5);

manage.save_game(game);
int x; int o; int t;
manage.get_winner_total(x,o,t);

if((x =1) && (o=1)&&(t=1))
{check =true;}
	
	REQUIRE(check == true);
 }

TEST_CASE("Tests correct win total history using TicTacToe class only")
 {
	bool check;
	int x_win_test= 0;
	int o_win_test=0;
	int ties_test=0;
	string x_o;
	
	//game1 X wins
	TicTacToe game;
	x_o="X";
	game.start_game(x_o);
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(4);
	game.mark_board(9);

	if(game.get_winner() =="X")
	{x_win_test= x_win_test+1;}
		if(game.get_winner() =="O")
		{o_win_test= o_win_test+1;}
		if(game.get_winner() =="C")
			{ties_test= ties_test+1;}
    //game2 O wins
	x_o="O";
	game.start_game("O");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(4);
	game.mark_board(9);

if(game.get_winner() =="X")
	{x_win_test= x_win_test+1;}
		if(game.get_winner() =="O")
		{o_win_test= o_win_test+1;}
		if(game.get_winner() =="C")
			{ties_test= ties_test+1;}

	//game3 tie
	x_o="X";

	game.start_game(x_o);
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(8);
	game.mark_board(9);
	game.mark_board(5);

if(game.get_winner() =="X")
	{x_win_test= x_win_test+1;}
		if(game.get_winner() =="O")
		{o_win_test= o_win_test+1;}
		if(game.get_winner() =="C")
			{ties_test= ties_test+1;}

	if((x_win_test =1) && (o_win_test=1)&&(ties_test=1))
	{check =true;}

	REQUIRE(check == true);
 }

TEST_CASE("Tests first player is set to  X")
 {
	TicTacToe game;
	string player = "X";
	game.start_game(player);
	REQUIRE(game.get_player() == "X");
 }
TEST_CASE("Tests first player is set to O")
 {
	TicTacToe game;
	string player = "O";
	game.start_game(player);
	REQUIRE(game.get_player() == "O");

 }
TEST_CASE("Test X win with 5 board marks")
 {
	TicTacToe game;
	string player = "X";
	bool x_win = false;
	game.start_game(player);

	game.mark_board(1);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(2);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(5);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(4);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(9);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == true);
 }

TEST_CASE("Test O win with 5 board marks")
 {
	TicTacToe game;
	string player = "O";
	bool o_win = false;
	game.start_game(player);

	game.mark_board(1);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);

	game.mark_board(2);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);

	game.mark_board(5);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);

	game.mark_board(4);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);

	game.mark_board(9);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == true);
 }

TEST_CASE("Test Tie with 9 board marks")
 {
	TicTacToe game;
	string player = "X";
	bool tie = false;
	game.start_game(player);

	game.mark_board(1);
	game.game_over();
	if(game.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(2);
	game.game_over();
	if(game.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(3);
	game.game_over();
	if(game.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(4);
	game.game_over();
	if(game.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(6);
	game.game_over();
	if(game.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(7);
	game.game_over();
	if(game.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(8);
	game.game_over();
	if(game.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(9);
	game.game_over();
	if(game.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(5);
	game.game_over();
	if(game.get_winner() =="C")
	{tie=true;}
	REQUIRE(tie == true);
} 

TEST_CASE ("Test win by 1st column with Game Over function")
 {
	TicTacToe game;
	string player = "X";
	game.start_game(player);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);	

	game.mark_board(7);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by 2nd column with Game Over function")
 {
	TicTacToe game;
	string player = "X";
	game.start_game(player);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);	

	game.mark_board(8);
	REQUIRE(game.game_over() == true);
		
 }
 TEST_CASE("Test win by 3rd column with Game Over function")
 {
	TicTacToe game;
	string player = "X";
	game.start_game(player);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);	

	game.mark_board(9);
	REQUIRE(game.game_over() == true);
		
 }
 TEST_CASE("Test win by 1st Row with Game Over function")
 {
	TicTacToe game;
	string player = "X";
	game.start_game(player);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);	

	game.mark_board(3);
	REQUIRE(game.game_over() == true);
		
 }
 TEST_CASE("Test win by 2nd Row with Game Over function")
 {
	TicTacToe game;
	string player = "X";
	game.start_game(player);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);	

	game.mark_board(6);
	REQUIRE(game.game_over() == true);
		
 }
 TEST_CASE("Test win by 3rd Row with Game Over function")
 {
	TicTacToe game;
	string player = "X";
	game.start_game(player);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);	

	game.mark_board(9);
	REQUIRE(game.game_over() == true);
		
 }
 TEST_CASE("Test win diagonally from top left with Game Over function")
 {
	TicTacToe game;
	string player = "X";
	game.start_game(player);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);	

	game.mark_board(9);
	REQUIRE(game.game_over() == true);
		
 }
 TEST_CASE("Test win diagonally from bottom left with Game Over function")
 {
	TicTacToe game;
	string player = "X";
	game.start_game(player);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);	

	game.mark_board(7);
	REQUIRE(game.game_over() == true);
		
 }