#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include <memory>
#include"tic_tac_toe.h"

using std::string, std::vector,std::cin, std::cout;
//using namespace std;

TicTacToe::TicTacToe(int s):pegs(s*s," "){}  //defined constructor

bool TicTacToe::game_over(int&s)
{
bool win_row =check_row_win();
    if (win_row ==true)
    {
      return true;  
    }
bool win_col =check_col_win();
    if (win_col ==true)
    {
      return true;  
    }
bool win_diag =check_diag_win();
    if (win_diag ==true)
    {
      return true;  
    }
if(check_board_full(s)==true)
{
winner = "C";
cout<<"Game Tied"<<endl;
cout<<"No winner(X or O), the value stored in Winner = "<<winner<<endl;
}
return check_board_full(s);
}

void TicTacToe::start_game(string first_player)
{
//cout<<"first Player entered was an "<< first_player<<endl;
player=first_player;
clear_board(s);
}

void TicTacToe::mark_board(int position)
{
pegs[position -1] = player;
set_next_player();
}

bool TicTacToe::check_row_win()
{
  /*  if(((pegs[0]=="X") && (pegs[1] =="X") && (pegs[2] == "X"))||((pegs[0]=="O") && (pegs[1] =="O") && (pegs[2] == "O")) )
    {
    set_winner();
    cout<<"There is a Winner! :"<<winner<<endl;
    return true;
    }
    if(((pegs[3]=="X") && (pegs[4] =="X") && (pegs[5] == "X"))||((pegs[3]=="O") && (pegs[4] =="O") && (pegs[5] == "O")) )
    {
    set_winner();
    cout<<"There is a Winner! :"<<winner<<endl;
    return true;
    }
    if(((pegs[6]=="X") && (pegs[7] =="X") && (pegs[8] == "X"))||((pegs[6]=="O") && (pegs[7] =="O") && (pegs[8] == "O")) )
    {
    set_winner();
    cout<<"There is a Winner! :"<<winner<<endl;
    return true;
    }  */
return false;
}

bool TicTacToe::check_col_win()
{
  /*  if(((pegs[0]=="X") && (pegs[3] =="X") && (pegs[6] == "X"))||((pegs[0]=="O") && (pegs[3] =="O") && (pegs[6] == "O")) )
    {
    set_winner();
    cout<<"There is a Winner! :"<<winner<<endl;
    return true;
    }
    if(((pegs[1]=="X") && (pegs[4] =="X") && (pegs[7] == "X"))||((pegs[1]=="O") && (pegs[4] =="O") && (pegs[7] == "O")) )
    {
    set_winner();
    cout<<"There is a Winner! :"<<winner<<endl;
    return true;
    }
    if(((pegs[2]=="X") && (pegs[5] =="X") && (pegs[8] == "X"))||((pegs[2]=="O") && (pegs[5] =="O") && (pegs[8] == "O")) )
    {
    set_winner();
    cout<<"There is a Winner! :"<<winner<<endl;
    return true;
    }  */
return false;
}

bool TicTacToe::check_diag_win()
{
 /*   if(((pegs[0]=="X") && (pegs[4] =="X") && (pegs[8] == "X"))||((pegs[0]=="O") && (pegs[4] =="O") && (pegs[8] == "O")) )
    {
    set_winner();
    cout<<"There is a Winner! :"<<winner<<endl;
    return true;
    }
    if(((pegs[2]=="X") && (pegs[4] =="X") && (pegs[6] == "X"))||((pegs[2]=="O") && (pegs[4] =="O") && (pegs[6] == "O")) )
    {
    set_winner();
    cout<<"There is a Winner! :"<<winner<<endl;
    return true;
    }  */
return false;
}



void TicTacToe::set_winner()
{
    if (player=="X")
    {
    player="O";
    }
        else
        {
        player="X";   
        }
winner=player;

}
string TicTacToe::get_winner()
{
return winner;
}


string TicTacToe::get_player()
{
return player;
}

/*void TicTacToe::display_board()
{
int i;
  cout<<"|";  
    for(i=0;i<3;i++)
    {
    cout<<pegs[i]<<"|";
    }
    cout<<endl;
    cout<<"|";
        for(i=3;i<6;i++)
        {
        cout<<pegs[i]<<"|";
        }
        cout<<endl;
        cout<<"|";
            for(i=6;i<9;i++)
            {
            cout<<pegs[i]<<"|";
            }
            cout<<endl;
}*/

void TicTacToe::set_next_player()
{
    if (player=="X")
    {
    player="O";
    }
        else
        {
        player="X";   
        }
}

bool TicTacToe::check_board_full(int&s)
{
int i=0;
int x=s;
int index=0;
for(i=0;i<x*x;i++)
{
    if(pegs[i]==" ")
    {
    index+=1;
    }       
}
        if(index>=1)
        {
        return false;   
        }
        return true;
}

void TicTacToe::clear_board(int&s)
{
int x =s; 
if (x==3)
{
vector<string> pegs{" "," "," "," "," "," "," "," ", " "};
}  
else
{
 vector<string> pegs{" "," "," "," "," "," "," "," ", " "," "," "," "," "," "," "," "}; 
}
}