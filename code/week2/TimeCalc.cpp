#include<iostream>

using namespace std;


int main(){
    int nowInSeconds = time(0);
    int minutes = nowInSeconds / 60;
    int hours = minutes / 60;
    int days = hours / 24;
    int years = days / 365;

    cout << years << "Years " << ": " << days << "Days " << ": " << hours << "Hours " << 
    ": " << minutes << "Minutes " << ": " << nowInSeconds << "Seconds " <<"\n";

    return 0;
}