//Exercise 2

#include <iostream>

using namespace std;

int main()
{
    cout << "Number of calories burned after 5, 10, 15, 20, 25, and 30 minutes\n";

    for (int i = 5; i <= 30; i += 5) // Initialize i to 5 and increment it by 5 in each iteration
    {
        double calories = 3.6 * i;
        cout << "After " << i << " minutes: " << calories << " calories burned" << endl;
    }

    return 0;
}