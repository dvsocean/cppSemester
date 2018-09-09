#include<iostream>

using namespace std;

int main(){

    /*
    in C++ you can assign numbers to a boolean var
    if the number is any nonzero number (including negative numbers) 
    the result will be true and if its zero then the result will be false
    */
    bool x = 4;

    if(x > 0)
        cout << x;

    return 0;
}