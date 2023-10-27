//lab4-program2

#include <iostream>

using namespace std;

int main()
    {
        cout<<"Enter numbers : (Sum>10 stops reading) ";
            int number;
            int sum=0;

            while(sum<=10)
            {
                cin>>number;
                sum=sum+number; //sum+=number;
            }

            cout<<"Sum : "<<sum;
            return 0;
    }