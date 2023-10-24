//Exersice-5 modification
/*Write a program that prints out the multiplication table up to 9 for the number n. The value of n is 
given by the user.
MODIFICATION. Write a program that prints out the multiplication table up to m for the number n. The values of 
n and m are given by the user.*/

#include <iostream>

using namespace std;

double n,m;

int main()
{   
    cout<<"--------------------------------------------- \n";
    cout<<"multiplication table up to m for the number n \n";
    cout<<"Enter number n, m : ";
    cin>>n>>m;

  if (n<=0 || m<=0)
    {
        cout<<"Both integers must be positive! \n";
        return 1;
    }

    cout<<"Multiples of "<<n<<" smaller than "<<m<<"\n";

    for (int i = n ; i<=m; i+=n)
    {
        cout<<i<<" \n";;
    }
    cout<<"--------------------------------------------- \n";
    return 0;
}
