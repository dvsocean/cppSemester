#include<iostream>
#include<iomanip>

using namespace std;


int main(){
	float x = 1.33333;
	float y = 3.55;

    //width increments and decrements the space before a variable is printed
	cout.width(50);
	
    //precision sets the precise amount of numbers to be specified after the demical point
	cout << fixed << setprecision(3) << x << " ";

    //here we increment space before var y is printed
	cout.width(50);
	cout << y << "\n";

	return 0;
}
