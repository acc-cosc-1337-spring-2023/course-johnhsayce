//add include statements
#include"func.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include <sstream>
using std::string, std::cout, std::cin, std::endl;

//get menu function
std::string menu(int menu_select)
{
string dna;
double count;
string rev_complement;
	do
	{
	cout<<" Enter Menu entry "<< endl;
	cout<<"--------------------------"<<endl;
	cout<<" ----------Menu-----------"<<endl;
	cout<<" Enter 1 =  Get GC content "<<endl;
	cout<<" Enter 2 =  Get DNA Complement  "<<endl;
	cout<<" Enter 3 =  Exit Menu "<<endl;
	cin>> menu_select;
	
		if(menu_select == 1)
      {
      cout<<"Get DNA input from keyboard"<<endl;
	   cin>>dna;
      cout<<"DNA entry is "<<dna<<endl;
	   count =get_gc_content(dna);
      cout<<"DNA entry GC percentage of total "<<count<<endl;
      }
			else if(menu_select == 2)
			{
         cout<<"Get DNA input from keyboard"<<endl;
	      cin>>dna;
         cout<<"DNA entry is "<<dna<<endl;
         rev_complement =get_dna_complement(dna);
         }
            else if (menu_select ==3)
				   { std::string check;
					   cout<<"Are you sure you want to exit"<<endl;
					   cout<<"Type Y or y if you want to exit or type N or n to return to the main menu  "<<endl;
					   cin>>check;
					   if (check =="Y" || check == "y")
                  menu_select = 4;
					      if (check =="N" || check == "n")
					      menu_select=1;
               }
   }
   while(menu_select>= 1 || menu_select<=3);	
	return 0;
}

//get gc_content function
double get_gc_content(const std::string &dna)
{
double count =0;
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
cout<<" DNA string as it looks entering gc function is"<<dna<<endl;
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
   string dna_reversed = dna_copy;
   cout<<"DNA string Object(reversed)"<<dna_reversed;
return dna_reversed;

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