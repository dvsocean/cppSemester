#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    float a, b, c;

    cout << "Enter 2 numbers \n";

    cin >> a >> b;

    c = a/b;

    cout << fixed << setprecision(2) <<  c;

    cout.width(10);

    cout << "Aaron";

    

    return 0;
}