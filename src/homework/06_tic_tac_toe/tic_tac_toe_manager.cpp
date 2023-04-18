#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <stdlib.h>
using std::string, std::vector, std::cin, std::cout;
using namespace std;

#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"

TicTacToeManager::TicTacToeManager(TicTacToeData d ):data{d}  //constructor for this class
{
games = data.get_games();
for(auto game:games)
{
 update_winner_account(game->get_winner());   
}


}

void TicTacToeManager:: save_game(unique_ptr<TicTacToe>&game)
{
update_winner_count(game->get_winner());
games.push_back(std::move(game));
get_winner_total(x_win,o_win,ties);
}

void TicTacToeManager::update_winner_count(string winner)
{ 
    if (winner =="X")
     {x_win+=1; }
            if (winner =="O")
            {o_win+=1; }
                if(winner ==" ")
                {ties+=1; }
}

void TicTacToeManager::get_winner_total(int &x,int &o, int &t)
{
x=x_win;
o=o_win;
t=ties;

//cout<<"Win Tally :: ";
//cout<<"X wins = "<< x_win<<"  "<< "O wins = "<<o_win<<"  "<<"Ties = "<<ties<<endl;
}
TicTacToeManager::~TicTacToeManager()
{
   data.save_games(games); 
}
