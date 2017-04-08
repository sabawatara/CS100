#include <iostream>

using namespace std;

int main()
{
    cout<< "Geometry App\n\n\n######################################\n\n\Welcome to Geometry App!  #\n";
    cout<< "\n######################################\n\n\n";
    cout<< "I will let you calculate the area and perimeter of 2-D shapes, and volume of 3-D shapes.\n\n";
    cout<< "**************************************\n\n";
    cout<< "Please enter a choice from below: \nWhat Are The Dimensions Of Your Shape?\n1) 2-D\n2) 3-D\n3) Exit\n\n";
    cout<< "Please enter your choice: \n*************************************\n";
    //Explains the program and prompts user for the dimensions

    string string1[3], string2;                     //Declares string

    string1[0]= "1";
    string1[1]= "2";
    string1[2]= "3";                             //Assigning values of array

    cin>> string2;

    if(string2 == string1[0])
    {
        cout<< "\nYou picked 1\n 1) 2-D shapes\n\n";
        cout<< "What shape would you pick?\n\n a) Circle\n b) Square\n c) Rectangle\n d) Trapezium\n e) Parallelogram\n f) Rhombus\n g) Triangle.";

        string string3[7], string4;

        string3[0]= "a";
        string3[1]= "b";
        string3[2]= "c";
        string3[3]= "d";
        string3[4]= "e";
        string3[5]= "f";
        string3[6]= "g";

        cout<< "\n\nPlease pick a shape: \n";
        cin>> string4;

        if(string4== string3[0])
        {

            cout<< "\nYou picked 1.a) Circle.\n\nPlease enter the radius (in meter): ";
            double radius, pi=3.14159, perimeter, area;
            cin>> radius;

            perimeter= 2 * pi *radius;
            area= pi * radius * radius;

            cout<< "\nPerimeter: 2 * " <<pi<< " * " <<radius<< " = " <<perimeter<< "m.\nArea= " <<pi<< " * " <<radius<< "^2 =" <<area<< " m^2.";
        }

        if(string4 == string3[1])
        {
            cout<< "\nYou picked 1.b) Square.\n\nPlease enter the length of sides(in meter): ";
            double side, perimeter, area;
            cin>> side;

            perimeter = 4 * side;
            area = side * side;

            cout<< "\nPerimeter = 4 *" <<side<< " = " <<perimeter<< " m.\nArea= " <<side<< "^2 = " <<area<< " m^2.";
        }

       if(string4 == string3[2])
        {
            cout<< "\nYou picked 1.c) Rectangle.\n\nPlease enter the length(in meter): ";
            double length, perimeter, area, width ;
            cin>> length;
            cout<< "\nPlease enter the width(in meter): ";
            cin>> width;

            perimeter = 2* length + 2 * width;
            area = length * width;

            cout<< "\nPerimeter = 2(" <<length<< " + " <<width<< ")= " <<perimeter<< " m.\nArea= " <<length<< " * " <<width<< "= " <<area<< " m^2.";
        }

        if(string4 == string3[3])
        {
            cout<< "\nYou picked 1.d) Trapezium.\n\nPlease enter the length of the parallel sides(in meter): \n";
            double pside1, pside2, height, perimeter, area, side1, side2;
            cin>> pside1;
            cin>> pside2;
            cout<< "\nPlease enter the height(in meter): ";
            cin>> height;
            cout<< "\nPlease enter the length of the other two sides(in meter): \n";
            cin>> side1;
            cin>> side2;

            perimeter = pside1 + pside2 + side1 + side2;
            area = 0.5 * height * (pside1 + pside2);

            cout<< "\nPerimeter =  " <<pside1<< " + " <<pside2<< " + " <<side1<< " + " <<side2<< " = " <<perimeter<< "m.";
            cout<< "\nArea = 0.5 * (" <<pside1<< " + " <<pside2<< ") * " <<height<< " = " <<area<< "m^2.";
        }

        if(string4 == string3[4])
        {
            cout<< "\nYou picked 1.e) Parallelogram.\n\nPlease enter the lengths of the adjacent sides(in meter): \n";
            double pside1, pside2, height, perimeter, area;
            cin>> pside1;
            cin>> pside2;
            cout<< "\nPlease enter the height(in meter): \n";
            cin>> height;

            perimeter = 2 * pside1 + 2 * pside2;
            area = pside1 * height;

            cout<< "\nPerimeter = 2 * ("<<pside1<< " + " <<pside2<< ") = " <<perimeter<< "m.\nArea= " <<pside1<< " * " <<height<< " = " <<area<< "m^2.";
        }

        if(string4 == string3[5])
        {
            cout<< "\nYou picked 1.f) Rhombus. \n\nPlease enter the length of the sides(in meter): ";
            double side, d1, d2, area, perimeter;
            cin>> side;
            cout<< "\nPlease enter the lengths of the diagonals(in meter): ";
            cin>> d1;
            cin>> d2;

            perimeter = 4 * side;
            area = (d1 * d2)/ 2;

            cout<< "\nPerimeter = 4 * " <<side<< " = " <<perimeter<< " m.\nArea= (" <<d1<< " * " <<d2<< ") /2 = " <<area<< "m^2.";
        }

   if(string4 == string3[6])
        {
            cout<< "\nYou picked 1.g) Triangle.\n\nPlease enter the length of the base(in meter): \n";
            double base, side, height, perimeter, area;
            cin>> base;
            cout<< "Please enter the height(in meter): ";
            cin>> height;
            cout<< "Please enter the length of the third side(in meter): ";
            cin>> side;


            perimeter = base + height + side;
            area = 0.5 * base * height;

            cout<< "\nPerimeter = " <<base<< " + " <<height<< " + " <<height<< " = " <<perimeter<< "m.";
            cout<< "\nArea= 0.5 * " <<base<< " * " <<height<< " = " <<area<< "m^2.";
        }

    }

     if(string2 == string1[1])
    {
        cout<< "\nYou picked 2\n2) 3-D shapes\n\n";
        cout<< "What shape would you pick?\n\na) Sphere\nb) Cube\nc) Cuboid\nd) Cylinder\ne) Pyramid.\n";

        string string5[5], string6;
        cin>> string6;

        string5[0]= "a";
        string5[1]= "b";
        string5[2]= "c";
        string5[3]= "d";
        string5[4]= "e";

        if (string6== string5[0])
        {
            cout<< "\nYou picked 2.a) Sphere.\n\nPlease enter the radius (in meter): ";
            double radius, pi=3.14159, volume;
            cin>> radius;

            volume = 4/3 * pi * radius * radius;

            cout<< "volume = 4/3 *" <<pi<< " * " <<radius<< "^2 ="  <<volume<<  "m^3.\n";
        }

        if (string6== string5[1])
        {
            cout<< "\nYou picked 2.b) Cube.\n\nPlease enter the length (in meter): ";
            double length, volume;
            cin>> length;

            volume = length * length * length;

            cout<< "Volume = " <<length<< "^3 =" <<volume<< " m^3.\n";
        }

        if (string6== string5[2])
        {
            cout<< "\nYou picked 2.b) Cuboid.\n\nPlease enter the length (in meter): \n";
            double length, width, height, volume;
            cin>> length;
            cout<< "\nPlease enter the width (in meter): \n";
            cin>> width;
            cout<< "/nPlease enter the height: (in meter)";
            cin>> height;

            volume = length * width * height;

            cout<< "Volume = " <<length<< " * " <<width<< " * " <<height<< " = "  <<volume<< " m^3.\n";
        }

         if (string6== string5[3])
        {
            cout<< "\nYou picked 2.d) Cylinder.\n\nPlease enter the radius (in meter): ";
            double radius, height, volume;
            cin>> radius;
            cout<< "\nPlease enter the height (in meter): ";
            cin>> height;

            float pi= 3.14159;
            volume = pi * radius * radius * height;

            cout<< "Volume = " <<pi<< " * " <<radius<< "^2 *" <<height<< " = " <<volume<< " m^3.\n";
        }

         if (string6== string5[4])
        {
            cout<< "\nYou picked 2.e) Pyramid.\n\nPlease enter the base length (in meter): ";
            double length, width, height, volume;
            cin>> length;
            cout<< "\nPlease enter the base width (in meter): ";
            cin>> width;
            cout<< "\nPlease enter the height (in meter): ";
            cin>> height;

            volume = (length * height * width) /3;

            cout<< "Volume = (" <<length<< " * " <<height<< " * " <<width<< ") /3 = " <<volume<< " m^3.\n";
        }

    }
            if(string2 == string1[2])
            {
                cout<< "You picked 3.\nYour choice: Exit.\n\n\n#####################################\n#				    #					#";
                cout<< "\n#\n#	   See you again! 	    #\n#	      Goodbye! 		    #\n#				    #					#\n#";
                cout<< "#####################################";
            }
    return 0;
}
