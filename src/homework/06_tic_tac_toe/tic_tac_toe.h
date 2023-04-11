#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include <memory>
#include<stdlib.h>
using std::string, std::vector;
using namespace std;

#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe

{

friend ostream &operator<<(ostream &out, const TicTacToe &game)
{
   int i;
  cout<<"|";  
    for(i=0;i<3;i++)
    {
    cout<<game.pegs[i]<<"|";
    }
    cout<<endl;
    cout<<"|";
        for(i=3;i<6;i++)
        {
        cout<<game.pegs[i]<<"|";
        }
        cout<<endl;
        cout<<"|";
            for(i=6;i<9;i++)
            {
            cout<<game.pegs[i]<<"|";
            }
            cout<<endl; 
    
    return out;
}
friend istream &operator>>(istream &in, const TicTacToe &game)
{
    return in;
}

private:
void set_next_player();
bool check_board_full();
void clear_board();
void set_winner();  // new proto fct check for win
string player;
string winner;  // new string var for winner

protected:
vector<string> pegs{};
bool virtual check_row_win();  // new proto fct check for win
bool virtual check_col_win();   // new proto fct check for win
bool virtual check_diag_win();   // new proto fct check for win

public:
TicTacToe(int);
bool game_over();
string get_winner();  // new proto fct check for win
void start_game(string);
void mark_board(int);
string virtual get_player() =0;
//void display_board ();


};
#endif