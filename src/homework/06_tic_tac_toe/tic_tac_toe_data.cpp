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
#include <fstream>
using std::string, std::vector;
using namespace std;

void TicTacToeData :: save_games(vector<unique_ptr<TicTacToe>>&games)
{
ofstream games_output_file;
games_output_file.open(file_name);   // reads ext file file_name
    if(games_output_file.is_open())
    {
        for (auto &game : games)
        {
            for(auto &peg: game-> get_pegs())    // outputs peg vector 
            {games_output_file<<peg;}    
    
        games_output_file<<game->get_winner();  //outputs winner
        games_output_file<<"\n";
        }
    }
games_output_file.close();       
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()   // read game results from file tictacttoe.txt
{
vector<unique_ptr<TicTacToe>>games;
ifstream games_input_file;
games_input_file.open(file_name); // file to be opened to read results
string line; //get line of input
vector<string>pegs;

    if(games_input_file.is_open())
    {
        while(getline(games_input_file,line))
        {   
            for(size_t i=0; i < (line.size()-1);++i) 
            {
                string ch (1,line[i]);  
                pegs.push_back(ch);
            }
    string winner {line[line.size()-1]};  // gets winner of game using last item in vector
    unique_ptr<TicTacToe> game;
        if(pegs.size() ==9)
        {
        game = make_unique<TicTacToe_3>(pegs,winner);
        }
            if(pegs.size()==16)
            {
            game = make_unique<TicTacToe_4>(pegs,winner); 
            }
        games.push_back(move(game)); // pushes game result into games
        }
}
games_input_file.close();

return games;
}



