//lab4_Exercise5

#include <iostream>

using namespace std;

int main()
{
    int M;
    cout<<"Enter a positive integer M : ";
    cin>>M;

    int sum = 0;
    int count = 0;
    int i = 1;

    while (sum<=M)
    {
        sum+=i;
        ++i;
        count++;
    }
    cout<<"The smalleset sum greater than "<<M<<" is "<<sum<<" and is obtained by adding "<<count<<" consecutive positive integers, i.e. : ";
    for(int j=1; j<=count; ++j)
    {
        cout<<j<<" ";
    }
    cout<<endl;

    return 0;
}