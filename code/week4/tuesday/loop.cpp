#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{

    string answer;
    //int init = 1;
    
    while(answer != "no" && answer != "NO") {
        cout << "Do you want to loop again? \n";
        cin >> answer;
    }



    return 0;
}
