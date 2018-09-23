#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    Find the diagonal of a square:
    First find the hypotenues --> a2 + b2 = c2
    then find c2 by finding the square of a2 + b2
    */
    double area = 64;
    cout << "The square root of " << area << " is " << sqrt(area) << endl;
    double diagonal = sqrt(area) * sqrt(2);
    cout << "The diagonal of a square with an area of "<< area << " is --> " << diagonal <<endl;

    /*
    Find the hypotensue --> a2 + b2 = c2
    then find c2 by solving for the square of a2 + b2
    */
    double length = 12;
    double width = 18;
    double areaOfRectangle = length * width;
    cout << "The length of a diagonal of a rectangle with an area of " << areaOfRectangle << " is " <<
    sqrt((length * length) + (width * width)) << endl;

    return 0;
}

