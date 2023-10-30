//lab4_Exercise4

#include <iostream>

using namespace std;

int main()
{   
    int n;
    cout<<"Input positive integer : ";
    cin>>n;

if (n>0)
{
    double sum=0;
    int i = 1; 
    while(i <=n )
        {
            sum+=1.0/i;
            ++i;
        }
            cout<<"sum : "<<sum<<endl;
}
else 
    {
        cout<<"pls enter a positive integer."<<endl;
    }

    return 0;
}