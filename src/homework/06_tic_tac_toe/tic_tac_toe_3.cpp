#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <stdlib.h>
using std::string, std::vector,std::cin, std::cout;
#include "tic_tac_toe_3.h"
#include "tic_tac_toe.h"

bool TicTacToe_3::check_row_win()
{
    if(((pegs[0]=="X") && (pegs[1] =="X") && (pegs[2] == "X"))||((pegs[0]=="O") && (pegs[1] =="O") && (pegs[2] == "O")) )
    {
    return true;
    }
    if(((pegs[3]=="X") && (pegs[4] =="X") && (pegs[5] == "X"))||((pegs[3]=="O") && (pegs[4] =="O") && (pegs[5] == "O")) )
    {
    return true;
    }
    if(((pegs[6]=="X") && (pegs[7] =="X") && (pegs[8] == "X"))||((pegs[6]=="O") && (pegs[7] =="O") && (pegs[8] == "O")) )
    {
    return true;
    }
return false;
}

bool TicTacToe_3::check_col_win()
{
    if(((pegs[0]=="X") && (pegs[3] =="X") && (pegs[6] == "X"))||((pegs[0]=="O") && (pegs[3] =="O") && (pegs[6] == "O")) )
    {
    return true;
    }
    if(((pegs[1]=="X") && (pegs[4] =="X") && (pegs[7] == "X"))||((pegs[1]=="O") && (pegs[4] =="O") && (pegs[7] == "O")) )
    {
    return true;
    }
    if(((pegs[2]=="X") && (pegs[5] =="X") && (pegs[8] == "X"))||((pegs[2]=="O") && (pegs[5] =="O") && (pegs[8] == "O")) )
    {
    
    return true;
    }
return false;
}

bool TicTacToe_3::check_diag_win()
{
    if(((pegs[0]=="X") && (pegs[4] =="X") && (pegs[8] == "X"))||((pegs[0]=="O") && (pegs[4] =="O") && (pegs[8] == "O")) )
    {
    return true;
    }
    if(((pegs[2]=="X") && (pegs[4] =="X") && (pegs[6] == "X"))||((pegs[2]=="O") && (pegs[4] =="O") && (pegs[6] == "O")) )
    {
    
    return true;
    }
return false;
}

