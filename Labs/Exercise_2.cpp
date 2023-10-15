#include <iostream>

using namespace std;

int main()
{   //Exercise_2
    int Value;
    cout << "Enter some integer value :" << endl;
    cin>>Value;

    if (Value>=10 || Value<100)
        {
            cout <<Value<< " is a two-digit number" << endl;
        }
        else
        {
            cout <<Value<< " is not a two-digit number" << endl;
        }

    return 0;
}
