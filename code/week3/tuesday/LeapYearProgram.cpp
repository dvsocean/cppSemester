#include<iostream>

using namespace std;

int main(){

    cout << "Enter year \n";

    int year;

    cin >> year;

    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout << "Leap year";
    }

    if(year % 100 == 0 && year % 400 != 0 && leap){
        cout << "Not a Leap year";
    }

    if(!leap){
        cout << "Not a leap year";
    }

    return 0;

}//End of class