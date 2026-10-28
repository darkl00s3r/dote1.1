#include <iostream>
#include <string>
using namespace std;

int main(){

    string name;
    getline(cin, name);
    int age;
    cin >> age;

    cout << "Hello " << name <<", next year you will be " << age+1 << endl;

    return 0;
}