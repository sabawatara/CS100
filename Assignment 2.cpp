#include <iostream>

using namespace std;

int main()
{
    cout<< "This is a simple meter-feet converter, accurate upto 4 d.p"<<endl;
    cout<< ""<<endl;

    int proclaim;

    float mf1, fm1, mf2, fm2;
    cout<< "Enter 1 to convert from meter to feet "<<endl;
    cout<< "Enter 2 to convert from feet to meter "<<endl;
    cout<< ""<<endl;
    cout<< "Your number "<<endl;
    cin>> proclaim;

    if (proclaim == 1)
    {
        cout<< "You have chosen to convert from meter to feet."<<endl;
        cout<< "Please enter your value in meters: "<<endl;
        cin>> mf1;
        fm1= mf1 * 3.2808;

        cout<< "Converting "<<mf1<< " meters to feet"<<endl;
        cout<< mf1<< " meters = " <<fm1<< " feet."<<endl;
        cout<< ""<<endl;

    }

    else if (proclaim ==2)
    {
        cout<< "You have chosen to convert from feet to meter."<<endl;
        cout<< "Please enter your value in feet: "<<endl;
        cin>> fm2;
        mf2 = fm2 * 3.2808;

        cout<< "Converting " <<fm2<< " feet to meters."<<endl;
        cout<< fm2<< " feet = " <<mf2<< " meter."<<endl;
        cout<< ""<<endl;
    }

    else
    {
        cout<< "You have chosen an invalid input."<<endl;
    }

    cout<< "Program will now terminate."<<endl;
    cout<< "Restart program if you would like to try again."<<endl;

    return 0;
}



