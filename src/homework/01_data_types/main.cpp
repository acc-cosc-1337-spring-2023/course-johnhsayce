//write include statements
# include <iostream>
# include "data_types.h"
//write namespace using statement for cout and cin
using std::cout;
using std::cin;
using std::endl;

// prototype function
int multiply_numbers(int num1);

/*
Call multiply_numbers with 5 and num parameter values and display function result
*/
int num;
int result_mult;

int main()
{
cout << "Enter the number to multiply by 5  ";
cin >> num;
cout << "The number entered is  " << num <<"\n";
result_mult = multiply_numbers(num);	
cout<< "Result of multplying num and 5 = "<< result_mult <<endl;
	return 0;

}
