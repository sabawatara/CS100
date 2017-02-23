#include <iostream>

using namespace std;

int main()
{
    cout<< "This program converts meter into feet"<<endl;
    cout<< ""<<endl;

    int length;
    cout<< "Enter a value of length in meter"<<endl;

    float meter;
    cin>> meter;

    float feet = meter * 3.28084;

    cout<< "Length in feet = " <<feet<< endl;

    return 0;
}
