//setprecision and fixed manipulators

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double k = 17.7777;
    cout<<fixed<<setprecision(5)<<k<<endl;
    cout<<setprecision(4)<<k<<endl;
    cout<<setprecision(3)<<k<<endl;
    cout<<setprecision(2)<<k<<endl;

    return 0;
}

/*
The setprecision manipulators are used to set
the number of digits to be displayed after the decimal point.
*/