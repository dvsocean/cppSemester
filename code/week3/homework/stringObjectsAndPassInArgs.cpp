#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string message = "ABCD";
    cout << message.length() << endl; 
    cout << message.at(0) << endl; 
    
    string s = "Bottom";
    cout << s.length() << endl;
    cout << s.at(1) << endl;

    cout << argv[1] << "\n\n";
    cout << argv[2];

    return 0;
}


