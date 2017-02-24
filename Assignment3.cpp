#include <iostream>

using namespace std;

int main()
{
    cout<< "This program calculates the area and circumference of a circle from the radius."<<endl;
    cout<< ""<<endl;

    float radius, area, circumference, pi;

    pi = 3.14159;
    cout<< "Please enter a value for radius: "<<endl;
    cin>> radius;
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    if (radius <0)
        {
            cout<< "You have chosen an invalid input. Lengths cannot have a negative value."<<endl;
            cout<< ""<<endl;

        }

    else if (radius >0)
{

    cout<< "The area of the circle is " << area << "."<<endl;
    cout<< ""<<endl;
    cout<< "The circumference of the circle is " << circumference << "."<<endl;
    cout<< ""<<endl;

}

cout<< "Program will now terminate."<<endl;
cout<< "Restart to try again. Thank you."<<endl;

    return 0;

}
