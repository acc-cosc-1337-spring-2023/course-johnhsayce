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

#ifndef TICTACTOE3_H
#define TICTACTOE3_H

class TicTacToe_3: public TicTacToe
{
/*friend ostream &operator<<(ostream &out,  TicTacToe_3 &game)
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
friend istream &operator>>(istream &in,  TicTacToe_3 &game)
{
    return in;
}*/

public:
TicTacToe_3():TicTacToe(3){}  //contructor which passes 3 to the base and initializes
TicTacToe_3(std::vector<string> p, string winner):TicTacToe(p, winner ){}

private:
bool check_row_win();  // new proto fct check for win
bool check_col_win();   // new proto fct check for win
bool check_diag_win();   // new proto fct check for win

};
#endif