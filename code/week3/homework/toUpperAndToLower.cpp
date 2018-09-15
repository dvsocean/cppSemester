#include<iostream>

using namespace std;

int main(){

    cout << "Enter a lowercase letter \n";
    char lowercaseLetter;
    cin >> lowercaseLetter;

    char uppercaseLetter = static_cast<char>('A' + (lowercaseLetter - 'a'));
    cout << "The corresponding uppercase letter is " << uppercaseLetter << endl;

    // cout << "Enter a lower case letter\n";
    // int x;

    // cin >> x;

    // cout << x;

    return 0;
}