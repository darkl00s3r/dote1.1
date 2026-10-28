#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "The multiplication table of: ";
    int n;
    cin >> n;

    for(int i = 0; i<=10; i++){
        cout << i << "*" << n << "=" << i*n << endl;
    }

    return 0 ;
}