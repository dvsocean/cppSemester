#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream input;
    string found;
    string more;

    input.open("/Users/danielocean/Desktop/numbers.txt");

    //only reads up to the first space
    input >> found;

    //reads the second space
    input >> more;
    input.close();

    cout << "File data found --> " << found << more << endl;

    return 0;
}
