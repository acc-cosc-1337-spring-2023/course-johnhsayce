//program which gets DNA data and  processes it a specifc way
#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
using std::string, std::cout, std::cin, std::endl;
//prototype functions
double get_gc_content(const std::string &dna);
std::string get_dna_complement(std::string dna);
std::string reverse_string(std:: string dna);
std::string menu(int menu_select);


int main() 
{
	string dna;
	string reverse_dna;
	string rev_complement;
	int menu_select=1;
	menu(menu_select);

	/*cout<<"Get DNA input from keyboard"<<endl;
	cin>>dna;
	cout<<"DNA entry is "<<dna<<endl;
	count =get_gc_content(dna);
	cout<<"DNA entry GC percentage of total "<<count<<endl;
	reverse_dna=reverse_string(dna);
	cout<<"DNA reverse string is "<<reverse_dna<<endl;
	get_dna_complement(dna);*/
	return 0;
}