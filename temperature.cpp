#include  <iostream>
using namespace std;

int main()
{
    cout<< "This program converts the temperature from Fahrenheit to degree Celsius and Kelvin"<<endl;

    int temperature;

    cout<< "Please enter a value of temperature in Fahrenheit: ";

    float Fahrenheit;
    cin>> Fahrenheit;

    float Celcius = (Fahrenheit -32)*5 /9;

    cout<< "Celcius " <<Celcius;

    return 0;
}



