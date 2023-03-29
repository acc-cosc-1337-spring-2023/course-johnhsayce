#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
using std::string, std::vector;
using namespace std;

#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe

{


private:
void set_next_player();
bool check_board_full();
bool check_row_win();  // new proto fct check for win
bool check_col_win();   // new proto fct check for win
bool check_diag_win();   // new proto fct check for win
void clear_board();
void set_winner();  // new proto fct check for win
string player;
string winner;  // new string var for winner
vector<string> pegs{" "," "," "," "," "," "," "," "," "};

public:
bool game_over();
string get_winner();  // new proto fct check for win
void start_game(string);
void mark_board(int);
string get_player();
void display_board();


};
#endif