#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    // string data = "This particular statement will execute 100 times";
    // int counter = 0;

    // while(counter < 100){
    //     cout << data << "\n";
    //     counter++;
    // }

    int num1, num2;
    int answer = 0;
    int usersAnswer;
    int userAttempts = 1;

    cout << "Give me two numbers..\n";

    cin >> num1 >> num2;

    cout << "What is the sum of " << num1 << " and " << num2 << "?" << endl;
    answer = num1 + num2;
    cin >> usersAnswer;

    if(usersAnswer == answer){
        cout << "Good job, that was the 1st try!\n";
    } else {
        while(userAttempts <= 3){
            int attemptsLeft = 3 - userAttempts;
            cout << "You really suck at math. Try again this is attempt number --> " << userAttempts << endl;
            cout << "You have " << attemptsLeft << " tries left. \n";
            cin >> usersAnswer;

            if(usersAnswer == answer){
                cout << "Correct..Finally!\n";
                userAttempts = 4;
            } else if(userAttempts != 4 || usersAnswer != answer){
                userAttempts++;
            }
        }
    }

     

    return 0;
}
