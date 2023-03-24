#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include"tic_tac_toe.h"

using std::string, std::vector,std::cin, std::cout;
//using namespace std;

int main() 
{
bool gover;
string first_player;
int position;
int index;
TicTacToe game1;

first_player=game1.get_player();
game1.start_game(first_player);
for(index=1;9;index++)
{
cout<<"Enter position from 1 thru 9 :";
cin>>position;
game1.mark_board(position);
game1.display_board();
gover = game1.game_over();
	if (gover==true)
	{
	cout<<"Game Over"<<endl;
	return 0;	
	}
}

return 0;
}