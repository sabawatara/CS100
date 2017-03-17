#include <iostream>         //This includes input, output library

using namespace std;

int main()                  // THis is the main function
{                           //Start of main body
    int num1, num2;      //Declares integer variable
    cout<< "Please enter the first number: "<<endl;                   //Prompts the user for number
    cin>> num1;                                                      //Takes user input
    cout<< "Please enter the second number: "<<endl;                 //Prompts the user for number of terms
    cin>> num2;                                                     //Takes user input


    int z=0;                                                       //A third variable is declared to keep the loop going

        for(int i=0;i<num2;i++)                 //Start of loop. num1 is added to itself as many times as the value of num2.
                                    //The starting value of the iterate is 0 and it's less than num2. It increases by one each
                                    //time the loop is repeated. This is the factor that determines how many times num1 is to be
                                    //added to itself.
        {
                z=z+ num1;              //This can also be called the multiple of num1.
        }
        cout<<endl;
        cout<< "The product is " <<z<< "."<<endl;     //Displays the result to the user

    return 0;       //end of program

}                   //end of main body
