#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int randomNum = rand() % 101;
    cout << "Guess the number" << endl;
    int i = 1;
    int n;
    do {
        cout << "-> ";
        cin >> n;
        if(n == randomNum){
            cout << "You got it !" << endl;
        }else if(n > randomNum){
            cout << "Lower" << endl;
        }else if(n < randomNum){
            cout << "Higher" << endl;
        }
        cout << 5-i << "  try left" << endl;
        i++;

    }while(randomNum != n && i<=5);
    if(i>=5){
            cout << "I guess we'll never know..." << endl;
        }


    return 0;
}