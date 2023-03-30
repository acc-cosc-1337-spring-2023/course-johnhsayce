#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include"tic_tac_toe.h"

using std::string, std::vector,std::cin, std::cout;


int main() 
{
bool gover;  // game over variable
string first_player;
int position;
//int index;
char ch;
gover=false;

ch = 'Y';
while(ch=='Y'|| ch=='y' ) // loop runs umtil told to exit
{
TicTacToe game1;
cout<<"Enter a capital X or an capital O for initial player"<<endl;
cin>>first_player;
while (((first_player!="X")&&(first_player!="O")) ||(cin.fail()))
{
    cout<<"Inavlid character entered\n";
    cout<<"Please, Enter a capital X or an capital O for initial player\n";
    cin>>first_player;
}

//first_player=game1.get_player();  // asks for 1st player type X or O
game1.start_game(first_player);	// starts play with 1st player choice
cout<<"First Player entered was an "<< game1.get_player()<<endl;
game1.display_board(); 
//for(index=1;9;index++)
while(gover==false)
{
cout<<"Enter position from 1 thru 9"<<endl;
cout<<"(Program will exit if any other character is entered)  :";
cin>>position;
 //valdiation check for integers(>9) and strings or char inputs
if (!(cin && (position>0 && position<10)))
{
return 0;	
}
game1.mark_board(position);  // Marks position on game board
game1.display_board();   // Displays overall game board spaces and X's and o's marked
gover = game1.game_over();   //checks for game_over is true

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