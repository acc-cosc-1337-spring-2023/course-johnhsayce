#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include"tic_tac_toe.h"

using std::string, std::vector,std::cin, std::cout;
//using namespace std;

bool TicTacToe::game_over()
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
if(check_board_full()==true)
{
winner = "C";
cout<<"Game Tied"<<endl;
}
return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
cout<<"first Player entered was an "<< first_player<<endl;
player=first_player;
clear_board();
}

void TicTacToe::mark_board(int position)
{
pegs[position -1] = player;
set_next_player();
}

bool TicTacToe::check_row_win()
{
    if(((pegs[0]=="X") && (pegs[1] =="X") && (pegs[2] == "X"))||((pegs[0]=="O") && (pegs[1] =="O") && (pegs[2] == "O")) )
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
    }
return false;
}

bool TicTacToe::check_col_win()
{
    if(((pegs[0]=="X") && (pegs[3] =="X") && (pegs[6] == "X"))||((pegs[0]=="O") && (pegs[3] =="O") && (pegs[6] == "O")) )
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
    }
return false;
}

bool TicTacToe::check_diag_win()
{
    if(((pegs[0]=="X") && (pegs[4] =="X") && (pegs[8] == "X"))||((pegs[0]=="O") && (pegs[4] =="O") && (pegs[8] == "O")) )
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
    }
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
/*cout<<"Enter a capital X or an capital O for initial player"<<endl;
cin>>player;
if (((player!="X")&&(player!="O")) ||(cin.fail()))
{
    cout<<"Inavlid character entered\n";
    cout<<"Please, Enter a capital X or an capital O for initial player\n";
    cin>>player;
    return player;
}*/
return player;
}

void TicTacToe::display_board()
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
}

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

bool TicTacToe::check_board_full()
{
int i=0;
int index=0;
for(i=0;i<9;i++)
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

void TicTacToe::clear_board()
{
vector<string> pegs{" "," "," "," "," "," "," "," "," "};  
}