/*
Write a short program that converts a Fahrenheit temperature to its Celsius
equivalent. In the program, prompt the user for the Fahrenheit temperature
and read it into a variable of type double. Make the necessary
calculation (fahrenheit = (9.0 / 5.0) * celsius + 32). What would happen if
you used 9 / 5 in the calculation instead of 9.0 / 5.0?  Explain it! Use type casting to
save the result in an int variable and output the result to the
screen.
*/

#include<iostream>
using namespace std;

int main(){

    cout << "Enter temperature in Fahrenheit.." << endl;

    //Store the user provided temperature in a var of type double
    double far;
    cin >> far;

    /*
    calulations we use for celsius--
    if we use 9 / 5 we would end up with an incorrect calculation
    because 9 and 5 are both integers which use 4 bytes of memory each.
    Double data type is more exact therefore it uses 8 bytes of memory
    and gives a more precise calculation. 
    */
    double cel = 9.0/5.0;
    
    //since we are displaying a double data type to the user, we are type casting back to int to avoid errors. 
    int toScreen = (int)(far - 32) / cel;

    //output the result back to the user
    cout << "Temperature in celsius is.." << toScreen << " degrees" << endl; 

    //since were using int main we are specifiying a return value 
    return 0;
}
