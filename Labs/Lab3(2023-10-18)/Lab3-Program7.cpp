/*
Write the program that outputs the following table

1        10.0000
2        15.0000
3        22.5000
4        33.7500
5        50.6250
6        75.9375
7       113.9062
8       170.8594

Observe that in the first column we have numbers
from 1 to limit, where limit is given by the user.
In the second column, the next number
is 50% larger than the previous one.
**/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int limit;

    cout<<"Enter the limit for table"<<endl;
    cin>>limit;

    if(limit>0)
    {
            cout<<"---------------\n";
            double k = 10;
            for(int i=1; i<=limit; ++i)
            {
                cout<<i<<"\t"<<setw(10)<<fixed<<setprecision(4)<<k<<endl;
                k+=k/2;
            }
            cout<<"---------------\n";
    }
    else
        cout<<"Wrong number\n";

        return 0;
}
