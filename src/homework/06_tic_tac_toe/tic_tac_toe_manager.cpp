#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include <memory>
using std::string, std::vector,std::cin, std::cout;
using namespace std;

#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"

int x_win =0; int o_win =0; int ties =0;

void TicTacToeManager:: save_game(TicTacToe game1)
{
string winner = game1.get_winner();
update_winner_count(winner,game1);
games.push_back(game1);

}


void TicTacToeManager::update_winner_count(string winner, TicTacToe game1)
{
 string winner= game1.get_winner();
 if (winner =="X") 
    {x_win+=1; }
    if (winner =="O")
    {o_win+=1; }
        if (winner =="C")
        {ties+=1; }
}

void TicTacToeManager::get_winner_total()
{

}
