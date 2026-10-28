#include <iostream>
#include <string>
using namespace std;
 
int main(){

    cout << "Somme of the Number: ";
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum = sum + i;
        cout << i << " ";
    }

    cout << "\nThe sum of " << n << " is " << sum << endl;

    int j = 1;
    int result = 0;
    while(j<=n){
        result = result + j;
        cout << j << " ";
        j++;
    }

    cout << "\nThe sum of " << n << " is " << result << endl;


    return 0;
}