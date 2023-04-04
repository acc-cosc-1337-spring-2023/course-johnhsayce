#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include <memory>
#include"tic_tac_toe.h"
using std::string, std::vector;
using namespace std;

#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H
class TicTacToeManager

{
private:
void update_winner_count(string);
int x_win;
int o_win;
int ties;
vector<TicTacToe>games;

public:
void get_winner_total(int&,int&,int&);
void save_game(TicTacToe game1);
};
#endif