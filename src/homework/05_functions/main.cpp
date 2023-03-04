//program which gets DNA data and  processes it a specifc way
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cstring>
using std::string, std::cout, std::cin, std::endl;

//prototype functions
double get_gc_content(const std::string &dna);
std::string get_dna_complement(std::string dna);
std::string reverse_string(std:: string dna);
void menu(int menu_select);


int main() 
{
	string dna;
	string reverse_dna;
	string rev_complement;
	int menu_select=1;
	
	menu(menu_select);

	return 0;
}