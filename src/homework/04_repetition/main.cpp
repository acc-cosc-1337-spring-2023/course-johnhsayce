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
	int menu_select;
	cout<<" Enter Menu entry "<< endl;
	cout<<"--------------------------"<<endl;
	cout<<" ----------Menu-----------"<<endl;
	cout<<" Enter 1 =  Generate Factorial "<<endl;
	cout<<" Enter 2 =  Generate Highest Common Denominator  "<<endl;
	cout<<" Enter 3 =  Exit Menu "<<endl;
	cin>> menu_select;
	
	
		if(menu_select == 1)
		{
		int sum;
		int num;
		cout<<"Enter Factorial entry "<< endl;
		cin>> num;
		cout<<"The number entered is "<< num <<"\n";
		sum = factorial(num);
		cout<<"The factorial of "<< num<< "  is "<< sum<<"\n";
		}
			else if(menu_select == 2 )
			{
			int hi_com_fact;
			int num1, num2;
			cout<<"Enter the numbers to determine the highest common denominator "<< endl;
			cin>> num1>>num2;
			cout<<"The numbers entered are "<< num1 <<" and "<<num2<<"\n";
			hi_com_fact = gcd(num1, num2);
			cout<<"The highest common denominator for "<< num1<< " and "<< num2 <<" is "<< hi_com_fact <<"\n";		
			}
				else if (menu_select ==3)
				
	return 0;
}