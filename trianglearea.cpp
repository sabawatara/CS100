#include <iostream>

using namespace std;

int main()
{
    cout<< "Description: This program calculates the area of an triangle from the height and base."<<endl;
    cout<< ""<<endl;

    double area, height, base;

    cout<< "Please input a value for height."<<endl;
    cin>> height;
    cout<< "Please input a value for base."<<endl;
    cin>> base;

    area = 0.5 * base * height;
    cout<< "Area of the triangle is " << area << "."<<endl;
    cout<< ""<<endl;

    return 0;
}
