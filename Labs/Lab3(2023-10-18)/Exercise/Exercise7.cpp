// Exercise7

#include <iostream>

using namespace std;

int n = 4;
int main()
{



cout << "(a) \n";
    for (int i = 1; i <= n; ++i) 
    {
        for (int j = 1; j <= n; ++j) 
        {
            cout << '*';
        }
        cout << endl;
    }

cout<<"(b) \n";
for (int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
        cout<<'*';
        }
    cout<<endl;
    }

cout<<"(c) \n";
for (int i=1; i<=n; ++i)
{
    for(int k=n-i; k>0; --k)
        cout<<" ";
    for (int j=1; j<=i; ++j)
        {
        cout<<'*';
        }
cout<<endl;
}

cout<<"(d) \n";
int j=0;

    for(int i=1; i<=n; ++i)
    {
        for(int k=1; k<=(n-i); ++k)
            cout<<"  ";
        while(j!=(2*i-1))
        {
            cout<<"* ";
            ++j;
        }
        j=0;
        cout<<endl;
    }
    cout<<endl;

return 0;
}
