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
//cout<<"Again DNA input from keyboard equal "<<dna<<endl;
int num = dna.size();
cout<<"Size of string equal "<<num<<endl;
   for ( unsigned int i=0; i<dna.length(); ++i)
  {
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
// END of GC content function

// get dna reverse of initial dna string
std::string reverse_string(std:: string dna)
{
int num = dna.size();
//Use the following method to get dna string into character string 
   char dna_copy[dna.size() + 1];
   strcpy(dna_copy, dna.c_str());
   //cout<<"Char array copy of dna string\n";
   //cout << dna_copy << '\n';

//Function to reverse the dna_copy array[] from start to end
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

return dna_copy;
}
std::string get_dna_complement(std::string dna) 
{
   dna=reverse_string(dna);
   int n = dna.length();
   cout<<" print dna length after get dna complement call"<<n;
   cout<<"Relook at dna character string after call of reverse string is ";
      for (int i = 0; i <= n; i++)
      {
         cout << dna[i];
      }

   string result = dna; // create string of same length
   
   for (int i=0; i<n; i++) 
   {
      if (dna[i] == 'C')
         result[i] = 'G';
      else if (dna[i] == 'G')
         result[i] = 'C';
      else if (dna[i] == 'A')
         result[i] = 'T';
      else if (dna[i] == 'T')
         result[i] = 'A';
   }
   cout<<"Complement of DNA character string is ";
      for (int i = 0; i <= n; i++)
      {
         cout << result[i];
      }
   return result;
}