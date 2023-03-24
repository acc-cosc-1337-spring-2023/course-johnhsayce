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
int index;
TicTacToe game1;

first_player=game1.get_player();  // asks for 1st player type X or O
game1.start_game(first_player);	// starts play with 1st player choice 
for(index=1;9;index++)
{
cout<<"Enter position from 1 thru 9 :";
cin>>position;
game1.mark_board(position);  // Marks position on game board
game1.display_board();   // Displays overall game board spaces and X's and o's marked
gover = game1.game_over();   //checks for gane_over is true
	if (gover==true)		// if gover is true displays Gme Over
	{
	cout<<"Game Over"<<endl;
	return 0;	
	}
}

return 0;
}