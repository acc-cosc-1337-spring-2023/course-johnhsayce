//add include statements
#include"func.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>

using std::string, std::cout, std::cin, std::endl;

//get menu function
void menu(int menu_select)
{
string dna;
double count;
string reverse_dna;
string rev_complement;
	do
	{
	cout<<" Enter Menu entry "<< endl;
	cout<<"--------------------------"<<endl;
	cout<<" ----------Menu-----------"<<endl;
	cout<<" Enter 1 =  Get GC content "<<endl;
	cout<<" Enter 2 =  Get DNA Reverse  "<<endl;
   cout<<" Enter 3 =  Get DNA Reverse Complement  "<<endl;
	cout<<" Enter 4 =  Exit Menu "<<endl;
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
            reverse_dna =reverse_string(dna);
            cout<< "Reverse DNA from menu function"<<reverse_dna<<endl;
         }
			   else if(menu_select == 3)
			   {
            cout<<"Get DNA input from keyboard"<<endl;
	         cin>>dna;
            cout<<"DNA entry is "<<dna<<endl;
            rev_complement =get_dna_complement(dna);
            }
               else if (menu_select ==4)
				      { std::string check;
					      cout<<"Are you sure you want to exit"<<endl;
					      cout<<"Type Y or y if you want to exit or type N or n to return to the main menu  "<<endl;
					      cin>>check;
					         if (check =="Y" || check == "y")
                        menu_select = 5;
					            if (check =="N" || check == "n")
					               menu_select=1;
               }
   }
   while(menu_select>= 1 && menu_select<=4);	
	
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
int num = dna.size();
//Use the following method to get dna string into character string 
   char dna_copy[dna.size() + 1];
   strcpy(dna_copy, dna.c_str());
//Function to reverse the dna_copy array[] from start to end
 
 int start = 0;
 std::string dna_rev;
 int end=dna.size();
    while (start < end)
    {
        int temp = dna_copy[start];
        dna_copy[start] = dna_copy[end];
        dna_copy[end] = temp;
        start++;
        end--;
    }
      cout<<"Reverse of DNA character string(using for loop) is ";
      for (int i = 0; i <= num; i++)
      {cout << dna_copy[i];
      }
      
   cout << endl;
   
return dna_rev;
}
// FUNCTION CALL of reverse complement
std::string get_dna_complement(std::string dna) 
{
int num = dna.size();
//Use the following method to get dna string into character string 
   char dna_copy[dna.size() + 1];
   strcpy(dna_copy, dna.c_str());
   
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
      cout<<"Reverse of DNA character string(using for loop) is ";
      for (int i = 0; i <num+1; i++)
      {cout << dna_copy[i];
      }
      cout<<endl;
   string result;// = dna_copy; // create string of same length
   
   for (int i=0; i<num+1; i++) 
   {
      if (dna_copy[i] == 'C')
         result[i] = 'G';
      else if (dna_copy[i] == 'G')
         result[i] = 'C';
      else if (dna_copy[i] == 'A')
         result[i] = 'T';
      else if (dna_copy[i] == 'T')
         result[i] = 'A';
   }
   cout<<"Complement of DNA character string is ";
      for (int i = 0; i <= num+1; i++)
      {
         cout << result[i];
      }
      cout<<endl;
   return result;
}