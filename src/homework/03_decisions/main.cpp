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


int main() 
{
std::string letter_grade;
int grade;
cout<<" Enter the students numerical grade  ";
cin>>grade;
if(grade > 100)
{
cout<<" Incorrectly eneter, Enter the students numerical grade  ";
cin>>grade;	
}
letter_grade = get_letter_grade_using_if(grade);
cout<<" The students letter grade =  "<<letter_grade;
return 0;
}