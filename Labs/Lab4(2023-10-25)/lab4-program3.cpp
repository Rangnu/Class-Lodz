//lab4-program3
//Output the digits of a positive integer in reverse order.

#include <iostream>

using namespace std;

int main()
    {
        int number;
        cout<<"Enter positive value : ";
        cin>>number;

        if(number<=0)
        {
            cout<<"Invalid value";
            return 0;
        }
        int x= number;
        while (x>0)
        {
            cout<<x%10;
            x=x/10;
        }
    return 0;
    }