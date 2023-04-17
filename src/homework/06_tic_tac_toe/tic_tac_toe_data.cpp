#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include <memory>
#include"tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_manager.h"
#include"tic_tac_toe_4.h"
#include"tic_tac_toe_data.h"
#include<fstream>;
using std::string, std::vector;
using namespace std;

void TicTacToeData :: save_games(vector<unique_ptr<TicTacToe>>&games)
{
fstream output_file;
if(output_file.is_open())
{
    for (auto &game : games)
    {
        for(auto &peg: game-> get_pegs())
        output_file<<peg;
    }
        output_file<<game->get_winner();
        output_file<<endl;
}
output_file.close();
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
vector<unique_ptr<TicTacToe>>games;
fstream input_file;
input_file.open(read_games_file); // file to be opened to read results
string line_result; //get line of input
vector<string>pegs;

if(input_file.is_open())
{
    while(getline(input_file,line_result))
     {   
        for()  // not sure , need  to complete
        {
            string ch ();  // not sure , need  to complete
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
    games.push_back(); // not sure , need  to complete
    }
}
input_file.close();

return games;
}



