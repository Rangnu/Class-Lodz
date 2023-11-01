//lab4_Exercise 6

#include <iostream>

using namespace std;

int main()
{   
    int number, evenCount = 0, oddCount = 0;
    cout<<"Enter non-negative integer : ";
    cin>>number;

    if (number<0)
    {
        cout<<"It should be non-negative integer!"<<endl;
        return 1;
    }
    
    while(number>0)
    {
        int digit = number % 10;
        //cout<<"just of checking digit "<<digit<<"\n";
        if (digit % 2 == 0)
            {
                evenCount++;
            }
        else 
            {
                oddCount++;
            }
        number /=10;
        //cout<<"just of checking number "<<number<<"\n";
    }

    if(evenCount>oddCount)
        {
            cout<<"more even digits in the number"<<endl;
        }
    else if (oddCount>evenCount)
        {
            cout<<"more odd digits in the number"<<endl;
        }
    else
        {
            cout<<"Equal of even and odd digits."<<endl;
        }


    return 0;
}