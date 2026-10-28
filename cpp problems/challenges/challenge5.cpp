#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "Number: ";
    int n;
    cin >> n;

    if(n>0){
        cout << "The number is positive." << endl;
    }else if(n<0){
        cout << "The number is negative." << endl;
    }else{
        cout << "The number is zero."<< endl;
    }

    if(n%2 == 0){
        cout << "The number is Even." << endl;
    }else{
        cout << "The number is Odd." << endl;
    }

    return 0;
}