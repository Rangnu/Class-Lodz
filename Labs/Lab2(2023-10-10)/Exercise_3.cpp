#include <iostream>

using namespace std;

int main()
{
    //Exercise_3

    int F1,F2;
    cout << "Enter the first number : ";
    cin>>F1;
    cout << "Enter the second number : ";
    cin>>F2;

    if (F1==F2)
        {
        cout << "Numbers are equal " << endl;
        }
        else
        {
            if (F1>F2)
            {
                cout <<F1<< " is larger " << endl;
            }
            else
            {
                cout <<F2<< " is larger " << endl;
            }
        }

    return 0;
}
