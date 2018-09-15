#include<iostream>
#include<string>

using namespace std;

int main(){

    cout << "1. To deposit \n";

    cout << "2. to withdraw \n";

    cout << "3. to check balance \n";

    cout << "4. to exit \n";

    int choice;

    cin >> choice;

    switch(choice) {
        case 1: case 7: case 8:
            cout << "Deposit \n";
            break;

        case 2:
            cout << "Withdraw \n";
            break;

        case 3:
            cout << "Balance \n";
            break;

        case 4:
            cout << "Goodbye \n";
            break;

        default: 
            cout << "You entered an incorrect number\n";
    }


    return 0;
}