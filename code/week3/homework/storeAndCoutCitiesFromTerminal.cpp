#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    /*
    if these arg values are being declared in the program, 
    then they must also be passed in from command line else
    the compiler will throw an error. 
    */
    string city1 = argv[1];
    string temp = argv[2];
    double popu = 150000;

    cout << fixed << setprecision(2);
    cout << "I have lived in " << city1 << ", its my hometown\n";
    cout << "The average teperature is " << temp << "\n";
    cout << "and the russian populations is close to " << popu << endl;

    /*
    argc is the number of args passed in, there will always
    be a min of at least one arg because the name of the 
    binary file is already one arg
    */
    // cout.width(10)
    cout << left << "Number of args passed into the program --> " << argc << endl;

    //from book
    cout << setw(50) << "C++" << setw(6) << 101 << endl; 
    cout << setw(8) << "Java" << setw(5) << 101 << endl; 
    cout << setw(100) << "HTML" << setw(5) << 101 << 102 << endl;

    return 0;
}
