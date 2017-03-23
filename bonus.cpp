#include <iostream>
using namespace std;

int main() {
    int number, digit, counter = 0;                             //declares variable
    int lastDigit;
    cout<<"Enter a number: \n";                                 //prompts for input
    cin>>number;
    cout<<"Enter the digit to search for: \n";                  //prompts for input
    cin>>digit;

    while(number > 0){                                          //initiates loop until entered number becomes 0

        lastDigit = number % 10;                                //assigns remainder of entered number divided by 10

        if (lastDigit == digit) {                               //counts if the last digit of the number is the same as
            ++counter;                                          //the digit to search for
        }

        number = number / 10;                                   //divides the number by 10

    }

    cout<<"The entered digit '"<<digit<<"' has occured "<<counter<<" times in the number \n";       //output

    return 0;
}
