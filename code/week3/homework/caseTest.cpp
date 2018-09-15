#include<iostream>

using namespace std;

int main (){

    cout << "Enter a letter and I will tell you its case..\n";
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z'){
        cout << ch << " is an uppercase letter" << endl;
    } else if (ch >= 'a' && ch <= 'z'){
        cout << ch << " is a lowercase letter" << endl;
    } else if (ch >= '0' && ch <= '9'){
        cout << ch << " is a numeric character" << endl;
    }
    


    return 0;
}