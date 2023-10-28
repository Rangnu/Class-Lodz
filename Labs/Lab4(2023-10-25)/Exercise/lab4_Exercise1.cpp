//lab4_Exercise1
/*Write a program that computes the sum of the digits of a non-negative integer. Integer should be 
given by the user, do not accept values less than 0. For example, the sum of digits of 1234 is 1+2+3+4 = 10. 
Let us observe that 123%10 evaluates to 3 and 123/10 evaluates to 12.*/

#include <iostream>

using namespace std;

int main()
{   
    int number;
    cout<<"Enter non-negative integer : ";
    cin>>number;

    int sum=0;
    int x = number;
    while(x>0)
        {
            int digit = x%10;
            x=x/10;
            sum=sum+digit;
        }
cout<<"---------------------------------------\n";
cout<<"sum of digits of "<<number<<" is "<<sum<<endl;

return 0;
}

/*
input : 1234
x=1234 start  | digit 4 | x=123 | sum = 0+4
x=123  start  | digit 3 | x=12  | sum = (0+4) + 3
x=12   start  | digit 2 | x=1   | sum = ((0+4) + 3) + 2
x 1    start  | digit 1 | x= 0  | sum = (((0+4) + 3) + 2) + 1
sum = 0 + 4 + 3 + 2 + 1 = 10
x=0 so x>0 is false.

so result sum : 10 */