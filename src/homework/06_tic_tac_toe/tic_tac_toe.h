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
bool check_board_full(int&);
void clear_board(int&);
void set_winner();  // new proto fct check for win
string player;
string winner;  // new string var for winner

protected:
vector<string> pegs{};
 virtual bool check_row_win();  // new proto fct check for win
 virtual bool check_col_win();   // new proto fct check for win
 virtual bool check_diag_win();   // new proto fct check for win

public:
int s;
TicTacToe(int);
bool game_over(int&);
string get_winner();  // new proto fct check for win
void start_game(string);
void mark_board(int);
string get_player();
//void display_board ();


};
#endif