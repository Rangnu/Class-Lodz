#include <iostream>
#include <cmath>
//Exercise_7

using namespace std;

int main()
{
    int a,b,c,d;
    double discriminant,root1,root2;

    cout << "Enter the coefficients of the quadratic equation (a,b,c) :" << endl;
    cin>>a>>b>>c;

     discriminant = b*b-4*a*c;

     // Check the  discriminant to determine the nature of the roots

    if ( discriminant>0) {
        // Two real and distinct roots

        root1 = ( -b + sqrt(discriminant)) / (2 * a);
        root2 = ( -b - sqrt(discriminant)) / (2 * a);
        cout<< "root 1 : "<<root1<<endl;
        cout<< "root 2 : "<<root2<<endl;
    } else if (discriminant==0) {
        // One real root
        root1 = -b / (2*a);
        cout<< "root1 = root2 : "<<root1<<endl;

    } else {
        //complex roots
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);
        cout<<"root 1 : " << realPart<< " + "<< imaginaryPart<<" i"<<endl;
        cout<<"root 2 : " << realPart<< " - "<< imaginaryPart<<" i"<<endl;

    }



    return 0;
}
