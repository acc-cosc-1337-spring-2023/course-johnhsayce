//program which gets DNA data and  processes it a specifc way
#include<iostream>
#include<iomanip>
#include<string>
using std::string, std::cout, std::cin, std::endl;
//prototype functions
double get_gc_content(const std::string &dna);
std::string get_dna_complement(std::string dna);
std::string reverse_string(std:: string dna);

int main() 
{
	string dna;
	int count;
	cout<<"Get DNA input from keyboard"<<endl;
	cin>>dna;
	cout<<"DNA entry is "<<dna<<endl;
	count =get_gc_content(dna);
	cout<<"DNA entry GC count "<<count<<endl;

	return 0;
}