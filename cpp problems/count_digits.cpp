#include <iostream>
using namespace std;

int countDigits(int n) {
    // Return the number of digits in n
  	string x = to_string(n);
  	return x.length();
}

int main() {
    int n;
    cin >> n;
    cout << "Digits: " << countDigits(n) << endl;
    return 0;
}
