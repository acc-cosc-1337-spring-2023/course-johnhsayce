//include statements

#include<iostream>
#include<iomanip>
#include <string>

//using statements
using std::cout;
using std::cin;
using std::endl;


//prototype functions
int factorial(int num);
int gcd(int num1, int num2);

int main() 
{
	int sum;
	int num;
	cout<<"Enter Factorial entry "<< endl;
	cin>> num;
	cout<<"The number entered is "<< num <<"\n";
	sum = factorial(num);
	cout<<"The factorial of "<< num<< "  is "<< sum<<"\n";
	

	int hi_com_fact;
	int num1, num2;
	cout<<"Enter the numbers to determine the highest common denominator "<< endl;
	cin>> num1>>num2;
	cout<<"The numbers entered are "<< num1 <<" and "<<num2<<"\n";
	hi_com_fact = gcd(num1, num2);
	cout<<"The highest common denominator for "<< num1<< " and "<< num2 <<" is "<< hi_com_fact <<"\n";
	return 0;
}