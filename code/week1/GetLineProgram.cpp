#include<iostream>
using namespace std;

int main(){

    int age;
	string name;

	cout << "Enter your age and name\n";
	cin >> age;

	fflush(stdin);//clear buffer
	getline(cin, name);//read spaces
	fflush(stdin);//clear buffer

	cout << "You entered age " << age << " and name " << name <<"\n";

    return 0;
}