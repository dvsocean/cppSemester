#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    string var1 = argv[1];
 
    
    ofstream output;
    ifstream input;


    input.open("/Users/danielocean/Desktop/input.txt");

    output.open("/Users/danielocean/Desktop/output.txt");

    if(input.fail()){
        cout << "No file found!\n";
    }

    int a,b,c;

    input >> a >> b >> c;
    output << a << b << c;



    return 0;
}
