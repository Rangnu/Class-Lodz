//Exercise 2

#include <iostream>

using namespace std;

double CaloriesPerMinute;
int main()
{
    do{
    cout << "Enter the Number of calories burned per minute (>1)\n";
    cin>>CaloriesPerMinute;
    } while (CaloriesPerMinute<1);

    for (int i = 5; i <= 30; i += 5) // Initialize i to 5 and increment it by 5 in each iteration
    {
        double calories = CaloriesPerMinute * i;
        cout << "After " << i << " minutes: " << calories << " calories burned" << endl;
    }

    return 0;
}