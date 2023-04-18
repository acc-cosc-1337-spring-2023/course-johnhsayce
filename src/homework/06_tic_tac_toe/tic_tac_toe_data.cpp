#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <memory>
#include <cstring>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
#include <fstream>;
using std::string, std::vector;
using namespace std;

void TicTacToeData :: save_games(vector<unique_ptr<TicTacToe>>&games)
{
fstream games_output_file;
games_output_file.open(file_name);
if(games_output_file.is_open())
{
    for (auto &game : games)
    {
        for(auto &peg: game-> get_pegs())
        games_output_file<<peg;
    }
        games_output_file<<game->get_winner();
        games_output_file<<endl;
}
games_output_file.close();
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
vector<unique_ptr<TicTacToe>>games;
fstream games_input_file;
games_input_file.open(file_name); // file to be opened to read results
string line_result; //get line of input
vector<string>pegs;

if(games_input_file.is_open())
{
    while(getline(games_input_file,line_result))
     {   
        for(size_t i=0; i < (line_result.size()-1);++i) 
        {
            string ch (1,line_result[i]);  // not sure , need  to complete
            pegs.push_back(ch);
        }
    string winner {line_result[line_result.size()-1]};
    unique_ptr<TicTacToe> game;
    if(pegs.size() ==9)
    {
    game = make_unique<TicTacToe_3>(pegs,winner);
    }
        if(pegs.size()==16)
        {
        game = make_unique<TicTacToe_4>(pegs,winner); 
        }
    games.push_back(move(game)); // not sure , need  to complete
    }
}
games_input_file.close();

return games;
}



