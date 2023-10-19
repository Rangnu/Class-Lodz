//Program 4
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
7       14
8       16
9       18
10      20
----------------
Observe that in the first column we have numbers from 1 to 10.
In the second column we have numbers that are
the result of multiplying the number from the first column by 2.
**/

#include <iostream>

using namespace std;
int main()
{
    cout<<" N "<<" 2*N"<<endl;
    cout<<"------------"<<endl;
     for (int i; i<=10; ++i)
     {
        int k = 2*i;
        cout<< i <<"    "<< k <<endl;
     }
     cout<<"------------"<<endl;
     return 0;
}