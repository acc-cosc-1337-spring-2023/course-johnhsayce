//write include statements
# include <iostream>
# include <iomanip>
# include "hwexpressions.h"
//write namespace using statement for cout,cin, endl, fixed, setprecision
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

double get_sales_tax(double meal_amount);
double get_tip_amount(double meal_amount, const double tip_rate);
/*
Call the sales tax and tip amount functions
and print out various totals
*/
int main()
{
	double meal_amount;
	double sales_tax;
	double tip_rate;
	double tip_amount;
	cout<<" Enter the amount of the meal $ ";
	cin>>meal_amount;
	cout<<" The amount of the meal entered was $ "<<meal_amount<<endl;
	sales_tax = get_sales_tax( meal_amount);
	cout<< " The calculated sales tax is $"<< sales_tax<<endl;
	cout<<" Enter the % of tip you would like to give in % ";
	cin>>tip_rate;
	tip_amount = get_tip_amount( meal_amount,  tip_rate);
	cout<<" The tip calculated based on the tip rate entered is $"<< tip_amount<<endl;
	cout<<fixed<<setprecision(2)<<"  The final receipt for your order"<<endl;
	cout<<fixed<<setprecision(2)<<"   Meal Price  $"<<meal_amount<<endl;
	cout<<fixed<<setprecision(2)<<"   Tax amount $"<<sales_tax<<endl;
	cout<<fixed<<setprecision(2)<<"   Tip amount $"<<tip_amount<<endl;
	cout<<fixed<<setprecision(2)<<"  Total $"<<meal_amount+sales_tax+tip_amount<<endl;

}
