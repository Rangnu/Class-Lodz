//Exercise 3
/* Membership in the club requires a fee of 2500 PLN. It is announced that this fee will increase by 4% 
per year over the next 6 years. Write a program that displays the amount of expected fees for the next 6 years. 
MODIFICATION. The percentage increase in fees should be given by the user, do not accept values less or equal 
than 0% or greater than 10%.*/
/*MODIFICATION. The percentage increase in fees should be given by the user, do not accept values less or equal 
than 0% or greater than 10%.*/

#include <iostream>

using namespace std;

double Membership = 2500;
double percentage;
int main()
{   
    do{
    cout<<"Table of The amount of expected fees for the next 6 years \n";
    cout<<"(percentage should not be greater than 10 percent and should not be less or equal than 0 percent) \n";
    cout<<"percentage ? : ";
    cin>>percentage;
    } while (percentage>10 || percentage<=0);

    for (int i=1; i<=6; ++i)
        {
            
            Membership += Membership * percentage*0.01;
            cout<<"Membership fee Next "<<i<<" years is "<< Membership <<endl;
        }


}