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

// main function which performs a do-while for menu
//the do-while has embedded if -else statements for calls of 
// functions of factorial and greastest common denominator
int main() 
{
	int menu_select;
	do
	{
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
		cout<<"The factorial of "<< num<< " is "<< sum<<"\n";
		}
			else if(menu_select == 2)
			{
			int hi_com_fact;
			int num1, num2;
			cout<<"Enter the numbers to determine the highest common denominator "<< endl;
			cout<<"Enter the 1st number"<< endl;
			cin>>num1;
			cout<<"Enter the 2nd number"<< endl;
			cin>>num2;
			cout<<"The numbers entered are "<< num1 <<" and "<<num2<<"\n";
			hi_com_fact = gcd(num1, num2);
			cout<<"The highest common denominator for "<< num1<< " and "<< num2 <<" is "<< hi_com_fact <<"\n";		
			}
				else if (menu_select ==3)
				{ std::string check;
					cout<<"Are you sure you want to exit"<<endl;
					cout<<"Type Y or y if you want to exit or type N or n to etrun to the main menu  "<<endl;
					cin>>check;
					if (check =="Y" || check == "y")
					{return 0;}
					if (check =="N" || check == "n")
					menu_select=1;
				}
	}		
			while(menu_select>= 1 || menu_select<=3);	
	return 0;
}