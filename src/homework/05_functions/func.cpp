//add include statements
#include"func.h"
#include <iostream>
#include <string>
#include <iomanip>
#include<vector>
using std::string, std::cout, std::cin, std::endl;

//get gc_content function
double get_gc_content(const std::string &dna)
{
cout<<"Again DNA input from keyboard equal "<<dna<<endl;
int num = dna.size();
cout<<" Size of string equal "<<num;
cout<<" Using loop character method the string contains "<<endl;
for (unsigned i=0; i<dna.length(); ++i)
  {
    
    std::cout << dna.at(i)<<endl;
  }

/*cout<<"II Size of string ="<<dna.size()<<endl;
    for(auto ch :dna)
    {
        int i;
        ch=dna[i];
    cout<<"characters in string equal"<< ch;
    }
    for (int i = 0; i < num; i++) 
    {
    if(dna[i]=='C')
        {
            //count += 1;
        }
    return 0;
    }*/
    return 0;
}


