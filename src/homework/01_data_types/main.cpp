//write include statements
# include <iostream>
# include "data_types.h"
//write namespace using statement for cout and cin
using std::cout;
using std::cin;
using std::endl;
//included num1 as a global variable(since it was also used in the function multiply numbers)
// since the homework assignment stated to include num1 in the main an make it equal to 4
int num1;
// prototype function
int multiply_numbers(int num1);

/*
Call multiply_numbers with 5 and num parameter values and display function result
*/
int num;
int result;

int main()
{
//1st part get cin from keyboard and get a result by call of the multiply_numbers function
//display the result
cout << "Enter the number to multiply by 5  ";
cin >> num;
cout << "The number entered is  " << num <<"\n";
result = multiply_numbers(num);	
cout<< "Result of multplying num and 5 = "<< result <<endl;
//2nd part create int num1 = 4 and call multiply numbers function
//display the result
num1 = 4;
result = multiply_numbers(num1);
cout<< "Result of multplying num1=4 and 5 = "<< result <<endl;
return 0;

}
