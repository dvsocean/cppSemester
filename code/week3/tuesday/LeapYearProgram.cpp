#include<iostream>

using namespace std;

int main(){

    cout << "Enter year \n";

    int year;

    cin >> year;



    if(year % 4 == 0 && year % 400 != 0 && year % 100 == 0){
        cout << "This is a leap year\n";
    }

    if(year % 4 != 0 && year % 400 == 0 && year % 100 != 0){
        cout << "Not a leap year\n";
    }


}