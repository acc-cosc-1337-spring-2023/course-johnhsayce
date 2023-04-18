#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <stdlib.h>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <memory>
#include <fstream>
using std::string, std::vector;
using namespace std;

#ifndef TICTACTOEDATA_H
#define TICTACTOEDATA_H

class TicTacToeData
{
private:
void save_games(vector<unique_ptr<TicTacToe>>&games);
vector<unique_ptr<TicTacToe>> get_games();
public:
const string file_name{"tictactoe.dat"};
void get_data(&data);

};
#endif