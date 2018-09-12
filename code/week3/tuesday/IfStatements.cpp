#include<iostream>

using namespace std;

int main(){

    cout << "enter score \n";

    int score;

    cin >> score;

    if (score >= 50 && score < 74){
        cout << "Barely pass";
    } else if(score >= 75 && score < 89){
        cout << "Average pass";
    } else if(score >= 90 && score < 101){
        cout << "Flawless";
    } else {
        cout << "Invalid score";
    }

    return 0;
}