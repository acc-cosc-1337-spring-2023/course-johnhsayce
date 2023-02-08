//write include statements
# include <iostream>
# include "hwexpressions.h"
//write namespace using statement for cout and cin and endl
using std::cout;
using std::cin;
using std::endl;
const double TAX_RATE = 0.675;

//protoype functions
double get_sales_tax(double meal_amount);
double get_tip_amount(double meal_amount, const double tip_rate);
/*
Call the sales tax and tip amount functions
*/
int main()
{
	double meal_amount;
	double sales_tax;
	double tip_rate;
	double tip_amount;
	cout<<" Enter the amount of the meal";
	cin>>meal_amount;
	cout<<" The amount of the meal entered was S";
	sales_tax = get_sales_tax( meal_amount);
	cout<< "The calculated sales tax is $"<< sales_tax;
	cout<<" Enter the % of tip you would like to give";
	cin>>tip_rate;
	tip_amount = get_tip_amount( meal_amount,  tip_rate);
	cout<<"The tip calculated based on the tip rate entered is $"<< tip_amount;
}
