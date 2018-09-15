#include <iostream>
using namespace std;

int main(){

    int day = 0;
    char answer;

    cout << "Is your birthday in set 1? \n\n" <<
    "1 3 5 7\n" <<
    "9 11 13 15\n" <<
    "17 19 21 23\n" <<
    "25 27 29 31\n" << endl;
    cout << "Enter N/n for No and Y/y for Yes: \n\n";
    cin >> answer;

    if (answer == 'Y' || answer == 'y'){
        day += 1;
    }

    cout << "Is your birthday in set 2? \n\n" <<
    "2 3 6 7\n" <<
    "10 11 14 15\n" <<
    "18 19 22 23\n" <<
    "26 27 30 31" << endl;
    cout << "Enter N/n for No and Y/y for Yes: ";
    cin >> answer;

    if (answer == 'Y' || answer == 'y'){
        day += 2;
    }

    cout << "Is your birthday in set 3? \n\n" <<
        "4 5 6 7\n" <<
    "12 13 14 15\n" <<
    "20 21 22 23\n" <<
    "28 29 30 31" << endl;
    cout << "Enter N/n for No and Y/y for Yes: ";
    cin >> answer;

    if (answer == 'Y' || answer == 'y'){
        day += 4;
    }

    cout << "Is your birthday in set 4? \n\n" <<
        "8 9 10 11\n" <<
    "12 13 14 15\n" <<
    "24 25 26 27\n" <<
    "28 29 30 31" << endl;
    cout << "Enter N/n for No and Y/y for Yes: ";
    cin >> answer;

    if (answer == 'Y' || answer == 'y'){
        day += 8;
    }

    cout << "Is your birthday in set 5? \n\n" <<
    "16 17 18 19\n" <<
    "20 21 22 23\n" <<
    "24 25 26 27\n" <<
    "28 29 30 31" << endl;
    cout << "Enter N/n for No and Y/y for Yes: ";
    cin >> answer;

    if (answer == 'Y' || answer == 'y'){
        day += 16;
    }

    cout << "Your birthday is " << day << endl;

    return 0;
}