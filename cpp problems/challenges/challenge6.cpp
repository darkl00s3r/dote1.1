#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "Day(1-7): ";
    int n;
    cin >> n;

    string days[] ={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    switch(n){
        case 1:
            cout << days[0];
            break;
        case 2:
            cout <<days[1] << endl;
            break;
        case 3:
            cout << days[2];
            break;
        case 4:
            cout << days[3];
            break;
        case 5:
            cout << days[4];
            break;
        case 6:
            cout << days[5];
            break;
        case 7:
            cout << days[6];
            break;

    };

    return 0;
}
