#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout<< "Please enter a number: ";

    double num;

    cin>> num;

    double power;

    cout<< "Please enter the power of your number: ";

    cin>> power;

    double powered = pow(num, power);

    cout<<endl<< "Your number is " <<num<< " raised to the " <<power<< "th power is equal to " <<powered<< "."<<endl;

    return 0;
}
