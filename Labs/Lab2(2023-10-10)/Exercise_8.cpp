#include <iostream>
//Exercise_8
using namespace std;

int main()
{
    int day, month, year;

    cout << "(day, month, year) :" << endl;
    cin>>day>>month>>year;

     // Array to store the number of days in each month (assuming a non-leap year)
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int daysPassed = day;

    // Calculate the number of days passed in each month
    for (int i = 1; i < month; i++) {
        daysPassed += daysInMonth[i];
    }

    // Check for a leap year and adjust February if needed
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        if (month > 2) {
            daysPassed++;
        }
    }

    cout << "Number of days passed since the beginning of the year: " << daysPassed <<endl;




    return 0;
}
