//write include statements
# include <iostream>
# include "data_types.h"
//write namespace using statement for cout
using namespace std;

// prototype function
int multiply_numbers(int num1);

/*
Call multiply_numbers with 5 and 10 parameter values and display function result
*/
int num;
int result_mult;

int main()
{
num=10;
result_mult = multiply_numbers(num);	
cout<< result_mult;
	return 0;

}
