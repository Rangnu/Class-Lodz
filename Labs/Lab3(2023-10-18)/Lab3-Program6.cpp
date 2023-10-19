/*
Write the program that outputs the following table

N       2*N
----------------
1       2
2       4
3       6
4       8
5       10
6       12
----------------

Observe that in the first column we have numbers
from 1 to limit, where limit is given by the user.
In the second column we have numbers that are
the result of multiplying the number from the first column by 2.
**/

#include <iostream>
using namespace std;
int main()
{
    int limit;
    cout<<"Enter upper bound for table : "<<endl;
    cin>>limit;

    if(limit>0)
    {
        cout<<"N   2*N"<<endl;
        cout<<"--------"<<endl;
        for(int i=1; i<=limit; ++i)
        {
            int k = i * 2;
            cout<<i<<"  "<<k<<endl;
        }
        cout<<"--------"<<endl;
    }
    else
        cout<<"Wrong number";

        return 0;
}