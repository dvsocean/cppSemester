#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 100; i++) {
        for(int j= 0; j < 100; j++) {
            for(int k = 0; k < 100; k++) {
                cout << "Triple nest --> " << i * j * k << "\n";
            }
                
        }
            
    }
        


    return 0;
}
