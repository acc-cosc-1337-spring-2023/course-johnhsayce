//add include statements
#include"func.h"
#include <iostream>
#include <string>
#include <iomanip>
#include<vector>
#include<cstring>
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
double percent_total =count/num;
cout<<endl;
    return percent_total;
}
// get dna reverse of initial dna string
std::string reverse_string(std:: string dna)
{

int num = dna.size();
//char dna_reverse[dna.size() + 1];

cout<<"Size of string equal "<<dna.size()<<endl;
   char dna_copy[dna.size() + 1];
   strcpy(dna_copy, dna.c_str());
   cout<<"Char array copy of dna string\n";
   cout << dna_copy << '\n';

   /* Function to reverse arr[] from start to end*/
 int start = 0;
 int end=dna.size();

    while (start < end)
    {
        int temp = dna_copy[start];
        dna_copy[start] = dna_copy[end];
        dna_copy[end] = temp;
        start++;
        end--;
    }
      
      cout<<"reverse of DNA character string is ";
      for (int i = 0; i <= num; i++)
      {cout << dna_copy[i];
      
      }
   cout << endl;
/*cout<<" Using loop character method the reverse string contains "<<endl;
    for(int i = (strlen(dna_copy) - 1); i >= 0; i--)
         {
           cout << dna_copy[i];
              for(int index =0; index<num; index++) 
              {
              dna_reverse[index] = dna_copy[i];
              }
        }
    cout<<endl;
    return dna_reverse;*/
return "Help me";
}
/*std::string get_dna_complement(std::string dna) 
{

   string result = dna; // create string of same length
   int n = dna.length();
   for (int i=0; i<n; i++) {
      if (dna[i] == 'C')
         result[i] = 'G';
      else if (dna[i] == 'G')
         result[i] = 'C';
      else if (dna[i] == 'A')
         result[i] = 'T';
      else if (dna[i] == 'T')
         result[i] = 'A';
   }
   return result;*/
 