#include <iostream>

using namespace std;

int main()
{
    int number_1, number_2;

cout<< "Please enter your first number";
cin>> number_1;
cout<< "Please enter your second number";
cin>> number_2;

int sum, difference, product, quotient, remainder, division_result;

sum = number_1 + number_2;
difference = number_1 - number_2;
product = number_1 * number_2;
quotient = number_1 / number_2;
remainder = number_1 % number_2;
division_result = number_1 / number_2;

cout<< "Sum = " <<number_1<< " + " <<number_2<< " = " <<sum<< "." <<endl;
cout<< "Difference= " <<number_1<< " - " <<number_2<< " = " <<difference<< "." <<endl;
cout<< "Product = " <<number_1<< " * " <<number_2<< " = " <<product<< "." <<endl;
cout<< "Quotient = " <<number_1<< " / " <<number_2<< " = " <<quotient<< "." <<endl;
cout<< "Remainder = " <<number_1<< " % " <<number_2<< " = " <<remainder<< "." <<endl;
cout<< "Division result =" <<number_1<< " / " <<number_2<< " = " <<division_result<< "." <<endl;

return 0;
}
