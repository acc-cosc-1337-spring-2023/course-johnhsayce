#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <stdlib.h>
#include <memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
using std::string, std::vector;
using namespace std;

#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

class TicTacToeManager

{
private:
void update_winner_count(string winner);
int x_win{};
int o_win{};
int ties{};
TicTacToeData data;
vector<unique_ptr<TicTacToe>> games;

public:
void get_winner_total(int &,int &,int &);
void save_game(unique_ptr<TicTacToe>&);
TicTacToeManager()= default;         
TicTacToeManager(TicTacToeData &data);
~TicTacToeManager();
friend ostream& operator<<(ostream& out, TicTacToeManager& manage)
    {
        out<<"-Final Game History Summary-"<<endl;
        for( auto &obj : manage.games)
        {
           out<<*obj<<"\n"; 
        }
        out<<"Game summary win History"<<endl;
        out<<"X wins :>>> "<<manage.x_win<<endl;
        out<<"O wins :>>> "<<manage.o_win<<endl;
        out<<"Ties   :>>> "<<manage.ties<<endl;
        return out;
    }


};
#endif