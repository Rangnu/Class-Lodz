/*
Write the program that outputs the following table

N
----------------
1
2
3
4
5
6
----------------

Observe that in the first column we have numbers
from 1 to limit, where limit is given by the user.
**/

#include <iostream>
using namespace std;
int main()
{   
    int limit;
    cout<<"Enter limit number(upper bound for table)"<<endl;
    cin>>limit;

     if(limit>0)
     {
        cout<<"--------------"<<endl;
        for (int i=1; i<=limit; ++i)
        {
            cout<<i<<" "<<endl;
        }
        cout<<"--------------";
     }
     else
        cout<<"Wrong given number";

}