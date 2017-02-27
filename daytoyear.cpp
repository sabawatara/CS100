#include <iostream>

using namespace std;

int main()
{
    cout<< "Description: This program converts day into year and month."<<endl;
    cout<< ""<<endl;

    int input_day, day, month, year;

    cout<< "Please input the number of days: "<<endl;
    cin>> input_day;
    year = input_day / 365;
    month = (input_day % 365) / 30;
    day = (input_day % 365) % 30;

    cout<< "There are "<<year<< " years, " <<month<< " months and " <<day<< " days in " <<input_day<< " days." <<endl;
    cout<< ""<<endl;
    cout<< "The program will terminate now."<<endl;
    cout<< "Restart to try again."<<endl;

    return 0;

}
