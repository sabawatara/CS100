#include <iostream>

using namespace std;

int main ()
{
    int  a;
cout<< "This program swaps the value of 'a' and 'b'. " <<endl;
cout<< "Enter a value for a ";
cin>> a;

int b;

cout<< "Enter a value for b ";
cin>> b;

int temporary_variable = a;
a = b;
b = temporary_variable;

cout <<"A is  " << a << endl <<" B is " << b << endl << ".";

return 0;

}

