//Exercise 1 - modification

#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"ML of the water level will rise over the next x years\n";
    cout<<"Input x : ";
    cin>>x;
    
if (x>0)
{
    for (int i=1; i<=x; ++i)
        {   
            double k;
            k= k+1.5;
            cout<< i <<" year : "<< k <<" ML "<<endl;
        }
}
else 
    cout<<"invalid year number ";



    return 0;
}
