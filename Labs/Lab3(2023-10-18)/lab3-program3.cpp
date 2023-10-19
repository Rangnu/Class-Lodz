//write the program that outputs the following numbers.
//numbers from 2 to 20 every 3rd 2 5 8 11 14 17 20

#include <iostream>
using namespace std;

int main()
{
    cout<<"Numbers from 2 to 20 every 3rd"<<endl;
     for (int i=2; i<=20; i+=3) //i+3 is equivalent to i=i+3
     {
        cout<<i<<" ";
     }
}