//add include statements
#include"func.h"
#include <iostream>
#include <string>
#include <iomanip>
using std::string, std::cout, std::cin, std::endl;

//get gc_content fucntion
double get_gc_content(std::string &dna)
{
cout<<"again DNA input from keyboard"<<dna<<endl;
int num = dna.size();
int count =0;
char dna[num];
cout<<"size of string ="<<dna.size()<<endl;
    for (int i = 0; i < num; i++) 
    {
        cout<< "DNA index values"<<num<< dna[i];
        //if(dna[i]=="C")
        {
            //count += 1;
        }
    }

return count;
}