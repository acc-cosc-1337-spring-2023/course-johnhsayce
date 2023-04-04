#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"

using std::string, std::vector,std::cin, std::cout;


int main() 
{
TicTacToeManager manage;  // define class object for TTT manager

bool gover;  // game over variable
string first_player;
int position; //peg postion
//int index;
char ch;  // use for looping program
gover=false; // initial value for game over variable

ch = 'Y';
while(ch=='Y'|| ch=='y' ) // loop runs umtil told to exit
{
TicTacToe game;
cout<<"Enter a capital X or an capital O for initial player"<<endl;
cin>>first_player;
while (((first_player!="X")&&(first_player!="O")) ||(cin.fail()))
{
    cout<<"Inavlid character entered\n";
    cout<<"Please, Enter a capital X or an capital O for initial player\n";
    cin>>first_player;
}

//first_player=game1.get_player();  // asks for 1st player type X or O
game.start_game(first_player);	// starts play with 1st player choice
cout<<"First Player entered was an "<< game.get_player()<<endl;
game.display_board(); 
//for(index=1;9;index++)
while(gover==false)
{
cout<<"Enter position from 1 thru 9, for Player "<<game.get_player()<<endl;
cout<<"(PROGRAM will EXIT, if any other character is entered)"<<endl;
cout<<"Must be a number from 1-9, indicating grid position :"<<endl;
cin>>position;
 //valdiation check for integers(>9) and strings or char inputs
if (!(cin && (position>0 && position<10)))
{
return 0;	
}
game.mark_board(position);  // Marks position on game board
game.display_board();   // Displays overall game board spaces and X's and o's marked
gover = game.game_over();   //checks for game_over is true
manage.save_game(game);
}
cout<<"Game Over"<<endl;
cout<<"ENTER Y or y to CONTINUE , or enter any other value to exit"<<endl;
gover=false;
	cin>>ch;
		if (!(ch == 'Y'||ch =='y'))
		{
			return 0;
		}
}
return 0;
}