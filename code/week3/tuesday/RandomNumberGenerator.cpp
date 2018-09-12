#include<iostream>
#include<time.h>
using namespace std;

int main(){

    // srand(time(0));
    // int x = rand() % 11; //to get remainder use modulus 

    // cout << "Your random number is --> " << x << "\n";

    cout << "Enter salary \n";
    float salary;
    cin >> salary;
    float tax = 0;

    if(salary > 1000){
        tax = 0.3 * salary;
    }

    cout << tax;

    return 0;
}