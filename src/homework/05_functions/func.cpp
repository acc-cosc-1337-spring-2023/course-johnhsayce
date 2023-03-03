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
    double count =0;
cout<<"Again DNA input from keyboard equal "<<dna<<endl;
int num = dna.size();
cout<<"Size of string equal "<<num<<endl;
cout<<" Using loop character method the string contains "<<endl;
for (unsigned i=0; i<dna.length(); ++i)
  {
    
    std::cout << dna.at(i);
        if(dna.at(i)=='C')
        {
        count+=1;
        }
            if(dna.at(i)=='G')
            {
                count+=1;
            }
  }
cout<<endl;
    return count;
}


