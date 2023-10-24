//Exersice-5
/*Write a program that prints out the multiplication table up to 9 for the number n. The value of n is 
given by the user.*/

#include <iostream>

using namespace std;

double n;

int main()
{   
    cout<<"------------------------------ \n";
    cout<<"Enter number n : ";
    cin>>n;

    if (n<0)
    {
        cout<<"n must be positive! \n";
        return 1;
    }

    for (int i = n ; i<=9; i+=n)
    {
        cout<<i<<" \n";;
    }
    cout<<"------------------------------ \n";
    return 0;
}
