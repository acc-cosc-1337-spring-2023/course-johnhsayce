//write include statements
# include <iostream>
# include <iomanip>
# include <string>
# include "decisions.h"
//write namespace using statement for cout,cin, endl, fixed, setprecision
using std::cout;
using std::cin;
using std::endl;

std::string get_letter_grade_using_if(int grade);
std::string get_letter_grade_using_switch(int grade);

int main() 
{
int menu_num;
cout<<" ----MENU---- \n";
cout<<" 1-Letter grade using if \n";
cout<<" 2-Letter grade using switch \n";
cout<<" 3-Exit \n";
cin>>menu_num;

std::string letter_grade;
int grade;
cout<<" Enter the students numerical grade  ";
cin>>grade;
if(grade > 100)
{
cout<<" Incorrectly entered value, Enter the students numerical grade  ";
cin>>grade;	
}
letter_grade = get_letter_grade_using_if(grade);
cout<<" The students letter grade =  "<<letter_grade<<"\n";
return 0;
}