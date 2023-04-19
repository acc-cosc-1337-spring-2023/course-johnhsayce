#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include<memory>
#include <cstring>
#include <climits>
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
using std::unique_ptr;
using std::make_unique;
using std::string, std::vector,std::cin, std::cout;
using namespace std;

int main() 
{

TicTacToeData data;

unique_ptr <TicTacToe> game;

TicTacToeManager manage;  // define class object for TTT manager
TicTacToeManager( &data);
bool gover;  // game over variable
string first_player;
int position; //peg postion

char ch;  // use for looping program
gover=false; // initial value for game over variable

ch = 'Y';
while(ch=='Y'|| ch=='y' ) // loop runs umtil told to exit
{
int s;

cout<<" Enter the type of tic tac toe game you would like \n";
cout<<" Type 3 for a 3 x 3 grid, or 4 for a 4 X 4 grid \n";
cin>>s;
 //validation check for integers(>2 and <5) and strings or char inputs
while (!(cin && (s>2 && s<5)))
{
    cin.clear(); // clear input buffer to restore cin to a usable state
    cin.ignore(INT_MAX, '\n'); // ignore last input
    cout<<"Invalid character entered\n";
    cout<<"Please, Enter a 3 or 4 for grid type\n";
    cin>>s;  	
}
if(s == 4)
{
game = make_unique<TicTacToe_4>();			
cout<<"tictactoe 4----"<<endl;
}
else
{
game = make_unique<TicTacToe_3>();
cout<<"tictactoe 3----"<<endl;
}
cout<<"Enter a capital X or an capital O for initial player"<<endl;
cin>>first_player;
while (((first_player!="X")&&(first_player!="O")) ||(cin.fail()))
{
    cout<<"Invalid character entered\n";
    cout<<"Please, Enter a capital X or an capital O for initial player\n";
    cin>>first_player;
}

game->start_game(first_player);	// starts play with 1st player choice
cout<<"First Player entered was an "<< game->get_player()<<endl;
cout<<*game;  //display board using overloaded operatorin tictactoe class

while(gover==false)
{
cout<<"Enter grid position (1 thru 9) for 3x3 grid, for Player "<<game->get_player()<<endl;
cout<<"Enter grid position (1 thru 16) for 4x4 grid, for Player "<<game->get_player()<<endl;
cout<<"(PROGRAM will EXIT, if any other character is entered)"<<endl;
cin>>position;
 //validation check for integers(>16) and strings or char inputs
if (!(cin && (position>0 && position<17)))
{
return 0;	
}
game->mark_board(position);  // Marks position on game board
cout<<*game; //displays overall game board spaces and X's and o's marke, using overloaded operator tictactoe

gover = game->game_over();   //checks for game_over is true
//cout<<"Display game over bool"<<gover<<endl;
}
manage.save_game(game);
int x; int o; int t;
manage.get_winner_total(x,o,t);
cout<<"Winners Tally :: X wins ="<<x<< "  O wins ="<<o << "  Ties ="<<t<<endl;
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
return 0;
}

