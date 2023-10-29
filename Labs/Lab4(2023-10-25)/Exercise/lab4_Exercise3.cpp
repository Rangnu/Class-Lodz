//lab4_Exercise3

#include <iostream>

using namespace std;

    int containsOne(int number)
    {
    while(number > 0)
    {
        if(number%10 ==1)
            {
                return 1;
            }
            number /=10;
    }
    return 0;
    }


int main()
{
    int num;

    cout<<"Enter a non-negative integer : ";
    cin>>num;

    if (num>=0)
    {
        if(containsOne(num) == 1)
        {
            cout<<"The number contains the digit 1."<<endl;
        }
        else
        {
            cout<<"The number does not contain the digit 1."<<endl;
        }
    }
    else
    {
        cout<<"please enter a non-negative integer."<<endl;
    }
    return 0;
}
