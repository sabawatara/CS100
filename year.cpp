#include <iostream>

using namespace std;

int main ()
{
    cout<< "Description: This program calculates seconds, minutes and hours in a year."<<endl;
    cout<< ""<<endl;

    int sec, min, hour, day;

    day = 365;
    hour = 24 * day;
    min = 24 * 60 * day;
    sec = 24 * 60 * 60 * day;

    cout<< "There are " <<hour<< " hours in a year." <<endl;
    cout<< "" <<endl;
    cout<< "There are " <<min<< " minutes in a year."<<endl;
    cout<< ""<<endl;
    cout<< "There are " <<sec<< " seconds in a year."<<endl;
    cout<< ""<<endl;

    return 0;

}
