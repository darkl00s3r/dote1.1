#include <iostream>
#include <string>
using namespace std;

int main(){

    double width, height;
    cout << "Width: ";
    cin >> width;

    cout << "Height: ";
    cin >> height;

    double area = width * height;
    double perimeter = 2*(width + height);

    cout << "\nArea is " << area << endl;
    cout << "Perimeter is " << perimeter << endl;

    return 0;
}