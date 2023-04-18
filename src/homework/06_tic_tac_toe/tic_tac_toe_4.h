#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include <memory>
#include <stdlib.h>
#include "tic_tac_toe.h"
using std::string, std::vector;
using namespace std;

#ifndef TICTACTOE4_H
#define TICTACTOE4_H

class TicTacToe_4: public TicTacToe
{
/*friend ostream &operator<<(ostream &out, TicTacToe_4 &game);
{
   int i;
  cout<<"|";  
    for(i=0;i<4;i++)
    {
    cout<<game.pegs[i]<<"|";
    }
    cout<<endl;
    cout<<"|";
        for(i=4;i<8;i++)
        {
        cout<<game.pegs[i]<<"|";
        }
        cout<<endl;
        cout<<"|";
            for(i=8;i<12;i++)
            {
            cout<<game.pegs[i]<<"|";
            }
            cout<<endl; 
            cout<<"|";
                for(i=12;i<16;i++)
                {
                cout<<game.pegs[i]<<"|";
                }
                cout<<endl; 
    return out;
}
friend istream &operator>>(istream &in, TicTacToe_4 &game);
{
    return in;
}*/

public:
//TicTacToe_4():TicTacToe(4){}  //contructor which passes 4 to the base and initializes
TicTacToe_4():TicTacToe(vector<string> p, string w){}
private:
bool check_row_win();  // new proto fct check for win
bool check_col_win();   // new proto fct check for win
bool check_diag_win();   // new proto fct check for win
};
#endif