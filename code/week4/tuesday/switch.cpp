#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    cout << "How old is your child? \n";
	int age;
	cin >> age;
	
	switch(age){
		case 0: case 1:
			cout << "ineligible";
			break;
		case 2: 
			cout << "toddler";
			break;
		case 3: case 4: case 5:
			cout << "early childhood";
			break;
		case 6: case 7:
			cout << "young reader";
			break;
		case 8: case 9: case 10:
			cout << "elementary";
			break;
		case 11: case 12:
			cout << "middle";
			break;
		case 13:
			cout << "impossible";
			break;
		case 14: case 15: case 16:
			cout << "high school";
			break;
		case 17: case 18:
			cout << "scholar";
			break;
		default:
			cout << "ineligible";
	}
        
    
    return 0;
}
