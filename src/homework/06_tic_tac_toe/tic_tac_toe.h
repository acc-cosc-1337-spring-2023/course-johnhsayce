#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <stdlib.h>
#include <memory>
using std::string, std::vector;
using namespace std;

#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe

{
private:
void set_next_player();
bool check_board_full();
void clear_board();
void set_winner();  // new proto fct check for win
string player;
string winner;  // new string var for winner

protected:
vector<string> pegs{};
 virtual bool check_row_win();  // new proto fct check for win
 virtual bool check_col_win();   // new proto fct check for win
 virtual bool check_diag_win();   // new proto fct check for win

public:
int s;
TicTacToe() : pegs(9, " ")  {}
TicTacToe(int size) : pegs(size * size, " ") {}
vector<string>get_pegs(); // new proto for getting total pegs output
bool game_over();
string get_winner();  // new proto fct check for win
void start_game(string);
void mark_board(int);
string get_player();
friend ostream &operator<<(ostream &out, TicTacToe &game);

friend istream &operator>>(istream &in, TicTacToe &game);

};
#endif