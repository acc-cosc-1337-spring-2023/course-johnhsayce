#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include <memory>
#include<stdlib.h>
#include"tic_tac_toe.h"
using std::string, std::vector;
using namespace std;

#ifndef TICTACTOE4_H
#define TICTACTOE4_H

class TicTacToe_4: public TicTacToe
{
friend ostream &operator<<(ostream &out, const TicTacToe &game)
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
friend istream &operator>>(istream &in, const TicTacToe &game)
{
    return in;
}

};
#endif