#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "Celsius: ";

    double c;
    cin >> c;

    double f = c * (9.0/5.0) + 32.0;

    cout << "Fahrenheit: " << f << endl;

    return 0;
}