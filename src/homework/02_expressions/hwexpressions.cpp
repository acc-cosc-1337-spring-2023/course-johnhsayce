#include "hwexpressions.h"

//function which calculates sales tax on meal
double get_sales_tax(double meal_amount)
{
	const double SALES_TAX=0.0675;
	return meal_amount* SALES_TAX;
}

//function which calculates tip amount

double get_tip_amount(double meal_amount, double tip_rate)
{

	return meal_amount*tip_rate;
}


