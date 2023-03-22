#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include"tic_tac_toe.h"

//using std::string, std::vector;
using namespace std;

bool TicTacToe::game_over()
{
return check_board_full();

}

void TicTacToe::start_game(string)
{

}

void TicTacToe::mark_board(int)
{

}

string TicTacToe::get_player()
{

return "";
}

void TicTacToe::display_board()
{
int i;
for(i=0;i<3;i++)
{
cout<<pegs[i]<<"|";
}
cout<<endl;
for(i=3;i<6;i++)
{
cout<<pegs[i]<<"|";
}
cout<<endl;
for(i=6;i<9;i++)
{
cout<<pegs[i]<<"|";
}
cout<<endl;
}

void TicTacToe::set_next_player()
{

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
if(index>1)
{
return false;   
}
return true;
}


void TicTacToe::clear_board()
{
vector<string> pegs{" "," "," "," "," "," "," "," "," "};  
}