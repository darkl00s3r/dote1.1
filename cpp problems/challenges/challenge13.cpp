#include<iostream>
#include<string>
using namespace std;

bool isPrime(int n){
    if(n == 2 || n == 1){
        return true;
    }else{
        for(int i=3; i<n; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    
    
    int n;
    cin >> n;
    if(isPrime(n)){
        cout << n<<" is a prime number" << endl;
    }else{
        cout << n << " isn't a prime number" << endl;
    }
    
    for(int i = 1; i<=100; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }


    return 0;
}