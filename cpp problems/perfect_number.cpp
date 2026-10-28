#include <iostream>
using namespace std;

int main() {
    int n, total = 0;
    cin >> n;

    // Check and print
    int sum = 0; 
  	
  	if(n<0){
    	cout << "No a positif number" << endl;
    }else{
  		for (int i = 1; i<n; i++){
    		if(n%i == 0){
        	sum = sum + i;
        }
    	}
      if(sum == n){
      	cout << "Yes";
      }else{
      	cout << "No";
      }
    }
    return 0;
}
