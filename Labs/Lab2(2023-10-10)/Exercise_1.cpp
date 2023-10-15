#include <iostream>

using namespace std;

int main()
{
    //Exercise_1

    int Quantity, Price;
    double Total_expense;
        cout << "Enter Quantity :" <<endl;
        cin>>Quantity;
        cout << "Enter Price :" <<endl;
        cin>>Price;

    Total_expense=Quantity*Price;

    if (Total_expense>5000)
        {
         Total_expense=Total_expense*0.9;
         cout << "Total_expense :" <<Total_expense<<endl;
        }
        else
            cout << "Total_expense :" <<Total_expense<<endl;


    return 0;
}
