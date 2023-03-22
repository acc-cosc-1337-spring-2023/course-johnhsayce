#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include"tic_tac_toe.h"

//using std::string, std::vector;
using namespace std;

int main() 
{
bool gover;
TicTacToe game1;
game1.display_board();
gover = game1.game_over();
cout<<" Game Over "<<gover<<endl;

	return 0;
}