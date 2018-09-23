#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // for(int i = 0; i < 10; i++){
    
    //     for(int j = 0; j < 10; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    int i = 1;
    int j = 1;

    while(i < 10){
       j = 0;
        while(j < 10){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
       
       
    }


    
    return 0;
}
