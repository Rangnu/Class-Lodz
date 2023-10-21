/*
the word 'setw' stands for set width.
The setw manipulators are used to set
the field width of the output on the output device.
By default, the output is displayed/printed
right-justified within the specified field.
*/

//setprecision manipulator

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double n = 71.11111;
    cout<<setprecision(5)<<n<<endl;
    cout<<setprecision(4)<<n<<endl;
    cout<<setprecision(3)<<n<<endl;
    cout<<setprecision(2)<<n<<endl;
    return 0;
}


/*
The setprecision manipulators are used to set
the number of digits to be displayed.
*/