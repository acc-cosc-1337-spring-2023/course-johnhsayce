//write include statements
# include <iostream>
# include <iomanip>
# include <string>
# include "decisions.h"
//write namespace using statement for cout,cin, 
using std::cout;
using std::cin;


std::string get_letter_grade_using_if(int grade);
std::string get_letter_grade_using_switch(int grade);

int main() 
{
// create menu selection
int menu_num;
cout<<" ----MENU---- \n";
cout<<" 1-Letter grade using if \n";
cout<<" 2-Letter grade using switch \n";
cout<<" 3-Exit \n";
cin>>menu_num;
// menu 1 selection aks for grade and selects letter grade if function
if(menu_num == 1){
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
}
// menu 2 selection aks for grade and selects letter grade switch function
if(menu_num==2){
std::string letter_grade;
int grade;
cout<<" Enter the students numerical grade  ";
cin>>grade;
if(grade > 100)
{
cout<<" Incorrectly entered value, Enter the students numerical grade  ";
cin>>grade;	
}
letter_grade = get_letter_grade_using_switch(grade);
cout<<" The students letter grade =  "<<letter_grade<<"\n";
}
// menu 3 slection exits the program
if(menu_num==3){
    return 0;
}
return 0;
}