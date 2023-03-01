//add include statements
#include"func.h"
#include <iostream>
#include <string>
#include <iomanip>
using std::string, std::cout, std::cin, std::endl;

//get gc_content fucntion
double get_gc_content(const std::string &dna)
{
cout<<"again DNA input from keyboard"<<dna<<endl;
int num = dna.size();
int count =0;
char dna_copy[] =std::string &dna;
cout<<"size of string ="<<dna.size()<<endl;
    for (int i = 0; i < num; i++) 
    {
        if(dna[i]=="C")
        {
            count += 1;
        }
    }

return count;
}