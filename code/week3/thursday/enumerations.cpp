#include<iostream>

using namespace std;

int main(){

    enum bread {
        wheat, white, rye
    };

    bread x = rye;

    cout << x << endl;
    return 0;
}