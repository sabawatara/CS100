#include <iostream>

using namespace std;

int main ()

{
    cout<< "Please enter a number: ";

    int variable_for_storing_number;

    cin>> variable_for_storing_number;

    if (variable_for_storing_number > 0)
{
    cout<<"You're positive! - Well your number is!" <<endl;
}
    else if (variable_for_storing_number < 0)
    {
        cout<< "You're negative!- Well your number is!" <<endl;
    }
    else
    {
        cout<<"Your number is zero!" <<endl;
    }
        return 0;
}
