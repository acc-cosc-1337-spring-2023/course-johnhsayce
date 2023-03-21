#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
//using std::string, std::vector;
using namespace std;


class TicTacToe

{


private:
void set_next_player();
bool check_board_full();
void clear_board();
string player;
vector<string> pegs{"","","","","","","","",""};


public:
TicTacToe();
bool game_over();
void start_game(string);
void mark_board(int);
string get_player();
void display_board();


};
