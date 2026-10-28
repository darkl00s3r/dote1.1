#include<iostream>
#include<string>
using namespace std;

int fact(int n){
    int sum = 0;
    if(n==1){
        return 1;
    }else{
        sum = n*fact(n-1);
    }

    return sum;

}


int main(){

    int n = 2;
    cout << "Factorial of " << n << " is " << fact(n) << endl;
    cout << "Fibonacci of " << n << " is " << fib(n) << endl;


    return 0;
}