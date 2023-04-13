#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"

using std::string, std::vector,std::cin, std::cout;
using namespace std;

int main() 
{
TicTacToeManager manage;  // define class object for TTT manager

bool gover;  // game over variable
string first_player;
int position; //peg postion

char ch;  // use for looping program
gover=false; // initial value for game over variable

ch = 'Y';
while(ch=='Y'|| ch=='y' ) // loop runs umtil told to exit
{
int s; // grid size
cout<<" Enter the type of tic tac toe game you would like \n";
cout<<" Type 3 for a 3 x 3 grid, or 4 for a 4 X 4 grid \n";
cin>>s;
if(s == 4)
{
TicTacToe_4 game;

int grid=3;
 int &s= grid;
cout<<"Enter a capital X or an capital O for initial player"<<endl;
cin>>first_player;
while (((first_player!="X")&&(first_player!="O")) ||(cin.fail()))
{
    cout<<"Inavlid character entered\n";
    cout<<"Please, Enter a capital X or an capital O for initial player\n";
    cin>>first_player;
}

game.start_game(first_player);	// starts play with 1st player choice
cout<<"First Player entered was an "<< game.get_player()<<endl;
cout<<game;  //display board using overloaded operatorin tictactoe class

while(gover==false)
{
cout<<"Enter grid position (1 thru 16), for Player "<<game.get_player()<<endl;
cout<<"(PROGRAM will EXIT, if any other character is entered)"<<endl;
cin>>position;
 //valdiation check for integers(>16) and strings or char inputs
if (!(cin && (position>0 && position<17)))
{
return 0;	
}
game.mark_board(position);  // Marks position on game board
cout<<game; //displays overall game bboard spaces and X's and o's marke, using overloaded operator tictactoe

gover = game.game_over(s);   //checks for game_over is true

manage.save_game(game);
int x; int o; int t;
manage.get_winner_total(x,o,t);
cout<<"Winners Tally :: W wins ="<<x<< "  O wins ="<<o << "  Ties ="<<t<<endl;
}
cout<<"Game Over"<<endl;

cout<<"ENTER Y or y to CONTINUE , or enter any other value to exit"<<endl;
gover=false;
	cin>>ch;
		if (!(ch == 'Y'||ch =='y'))
		{
			cout<<manage;
			return 0;
		}
}

else
{
cout<<" Grid was not marked 3\n";
}
}
return 0;
}