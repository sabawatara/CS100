#include <iostream>

using namespace std;

int main()
{
    int number_1, number_2;
    cout<< "Please enter your first number!";
    cin>> number_1;
    cout<< "Please enter your second number!";
    cin>> number_2;

    int sum, difference, product, quotient;

    sum= number_1 + number_2;

    difference= number_1 - number_2;

    product= number_1 * number_2;

    quotient= number_1/number_2;

    cout<< " The sum of " << number_1 << " and " << number_2 << " is " << sum <<"." <<endl;
    cout<< " The difference between " << number_1 << " and " << number_2 << " is " << difference << "." <<endl;
    cout<< " The product of " << number_1 << " and " << number_2 << " is " << product << "." <<endl;
    cout<< " The quotient of " << number_1 << " and " << number_2 << " is " << quotient << "." <<endl;

    return 0;
}
