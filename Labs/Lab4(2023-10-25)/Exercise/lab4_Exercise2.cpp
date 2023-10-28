//lab4_Exercise2
/* Write a program that computes the greatest common divisor and the least common multiple (the 
smallest common multiple) of two positive integers.
For example GCD for 21 and 15 equals 3 and LCM of 21 and 15 is 105 */
#include <iostream>

using namespace std;

int main ()
{   
    int n1, n2;
    cout<<"Enter two positive integers : ";
    cin>>n1>>n2;

    int x = n1;
    int y = n2;

    while(x!=y)
    {
        if (x>y)
        {
            x=x-y;
        }
        else //(x<y)
        {
            y=y-x;
        }
    }
    cout<<"----------------------\n";
    cout<<"GCD OF "<<n1<<"and "<<n2<<" is "<<x;
    return 0;
}