#include <iostream>

using namespace std;

int main()

{
  cout<< " Description: This program will compute a value from the following equation using the"
         "values of the variables a, b and c, inputted by the user." <<endl;

    cout<< ""<<endl;

    cout<< "*values of the variables can be any integers or decimal numbers."<<endl;
    cout<< "*Answer is shown in the highest decimal place of the variables."<<endl;
    cout<< "*This equation will follow the standard BODMAS rule."<<endl;

    cout<< ""<<endl;

    cout<< "Equation:"<<endl;
    cout<< "Result= a*(b-c)+1.37"<<endl;
    cout<< ""<<endl;

    float number_A, number_B, number_C, result;

    cout<< "Enter value for a: "<<endl;
    cin>> number_A;

    cout<< "Enter value for b: "<<endl;
    cin>> number_B;

    cout<< "Enter value for c: "<<endl;
    cin>> number_C;

    result = number_A * (number_B - number_C) + 1.37;

    cout<< "Result = "<< number_A << "*(" << number_B << "-" << number_C << ") + 1.37 "<<endl;
    cout<< "       = " <<result<<endl;

    return 0;

}
