#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include <memory>
using std::string, std::vector, std::cin, std::cout;
using namespace std;

#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"

//int x_win =0; int o_win =0; int ties =0;



void TicTacToeManager:: save_game(TicTacToe game)
{
update_winner_count(game.get_winner());
games.push_back(game);
get_winner_total(x_win,o_win,ties);
}

void TicTacToeManager::update_winner_count(string winner )
{ string winner2 = winner;
    if (winner2 =="X")
     {x_win+=1; }
            if (winner2 =="O")
            {o_win+=1; }
                if (winner2 =="C")
                {ties+=1; }
}

void TicTacToeManager::get_winner_total(int &,int &, int &)
{
cout<<"Win Tally :: ";
cout<<"W wins = "<< x_win<<"  "<< "O wins = "<<o_win<<"  "<<"Ties = "<<ties<<endl;
}
