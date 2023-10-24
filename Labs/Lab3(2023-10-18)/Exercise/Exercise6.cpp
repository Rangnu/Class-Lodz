//Exercise6
/*Write a program that prints out the multiplication table for the positive numbers from n to m. The 
values of n and m are given by the user.
For example for n=3 and m=5 one should get the following multiplication table*/

#include <iostream>

using namespace std;

int n, m;

int main()
{
    cout<<"Multiplication table for the positive numbers from n to m\n";
    cout<<"Enter n, m : \n";
    cin>>n>>m;


    cout<<"---------------------------\n";
    //n, m should be positive
    if(n<=0 || m<=0)
        {
        cout<<"Enter positive values!\n";
        }
    
    //1st row * n (n+1) ... m 
    cout<<"*\t";
    for (int i=n; i<=m; ++i)
        {
        cout<<i<<"\t";
        }
        cout<<"\n";
        
    //from 2nd row 
    for(int i = n; i<=m; ++i)
        {
            cout<<i<<" \t";
                for(int j= n; j<=m; ++j)
                    {
                        cout<<i * j<<"\t";
                    }
                cout << "\n";
        }
    return 0;
}