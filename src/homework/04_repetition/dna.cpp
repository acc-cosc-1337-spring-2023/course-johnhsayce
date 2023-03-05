//add include statements
#include"dna.h"
#include<iostream>
#include<iomanip>
using std:: endl;
using std::cout;
//factorial function code
int factorial(int num)
{   
    
    int total =num;
    cout<<"Initial num "<<num<<endl; 
    while(num>1)
    { 
        total=total*(num -1);
        num=num-1;
    }
    return total;

}

//greatest common denominator(gcd) code
int gcd(int num1, int num2)
{   int hi_common_factor;
// swapping variables num1 and num2 if num2 is greater than num1.
    if ( num2 > num1) 
    {   
        int temp_store = num2;
        num2 = num1;
        num1 = temp_store;
    }
    for (int inc = 1; inc <=  num2; ++inc) 
    {   
        if (num1 % inc == 0 && num2 % inc ==0) 
        {
            hi_common_factor = inc;
        }
    }
return hi_common_factor;
}

