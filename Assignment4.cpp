#include <iostream>

using namespace std;

int main()
{
    cout<< "This program will calculate the area of a rectangle from its length and width."<<endl;
    cout<< ""<<endl;

    double length, width, area;

    cout<< "Input a value for the length: "<<endl;
    cin>> length;
    cout<< ""<<endl;
    cout<< "Input a value for the width: "<<endl;
    cin>> width;

    area = length * width;

    if (length <0, width <0)
    {
        cout<< "Sorry your input is invalid. Please try again with positive values."<<endl;
    }

    else if (length >0, width >0)
    {
        cout<< "The area of the rectangle is " <<area<< "."<<endl;
    }

    if  (length = width)
    {
        cout<< "That's actually a square, not a rectangle. Anyways the area is " <<area<< "."<<endl;
        cout<< ""<<endl;
    }

    cout<< "The program will now terminate."<<endl;
    cout<< "Restart program to try again. Thank you"<<endl;

    return 0;
}

