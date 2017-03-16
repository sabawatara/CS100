#include <iostream>         //This includes input, output library

using namespace std;

int main()                  // THis is the main function
{                           //Start of main body
    int num, terms, i, result;      //Declares integer variable
    cout<< "Please enter a number for which multiplication table will be displayed: "<<endl;    //Prompts the user for number
    cin>> num;                                                                                  //Takes user input
    cout<< "Please enter the number of terms: "<<endl;                                  //Prompts the user for number of terms
    cin>> terms;                                                                        //Takes user input

    for(i =1; i<= terms;i++ )   //start of loop where iterate starts from 1.
        // 1 is added each time the loop is repeated until the value of iterate is equal to the user input of terms.
    {
        result = num * i;           //formula for multiplication

        cout<< num << " * " << i << " = " <<result<<endl;      //result is displayed
    }
    return 0;       //end of program

}                   //end of main body
