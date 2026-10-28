#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "Give me 10 numbers" <<endl;

    int numbers[10];

    for(int i = 0; i<10; i++){
        cin >> numbers[i];
    }
    
    for(int i = 0; i<10; i++){
        cout << numbers[i]<<" ";
    }

    int max=0;
    int min=numbers[0];
    double avg=0;

    for(int i = 0; i<10; i++){
        if(max < numbers[i]){
            max = numbers[i];
        }else if (min > numbers[i]){
            min = numbers[i];
        }
        avg = numbers[i] + avg;
    }

    cout << "\nThe max is " << max << endl;
    cout << "The min is " << min << endl;
    cout << "The average is " << avg/10 << endl;

    return 0;
}