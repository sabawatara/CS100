#include <iostream>

using namespace std;

int main()

{
    cout<< "This program finds if a number is even or odd." <<endl;

    int number;
    cout<< "Please enter a number: " <<endl;

    cin>> number;

    int remainder = number % 2;

    if (remainder = 0)
    {
        cout<< number << " is even." <<endl;
    }
    else
{
    cout<<number<< " is odd. " <<endl;
}
    return 0;

}
