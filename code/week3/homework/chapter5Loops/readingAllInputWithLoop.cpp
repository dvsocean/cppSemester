#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    string fromFile;
    fstream input("/Users/danielocean/Desktop/out.txt");

    while(!input.eof()){
        input >> fromFile;
    }

    input.close();

    cout << fromFile << endl;

    return 0;
}
