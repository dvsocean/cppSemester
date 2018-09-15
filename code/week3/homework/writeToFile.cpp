/*
Many of these includes are not required, i was testing diff libraries
*/
#include<iostream>
#include<fstream>
#include <stdio.h>
#include <libgen.h>
#include <string.h>

#include <stdio.h>    
#include <stdlib.h>     

using namespace std;

int main(int argc, char const *argv[])
{
    
    ofstream output;

    //dont forget to supply the age var from the console
    string age = argv[1];

    output.open("/Users/danielocean/Desktop/numbers.txt");
    output << age << " is my current age. It is also when I want to meet Danita.\n"; 
    output.close();

    cout << "Your output has been written to a file\n";

    //get system path
    cout << getenv ("PATH") << "\n\n";
    
    return 0;
}
