#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    // Count vowels and print
  	int count = 0;
  	char vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
  
  	for (int i = 0; i<text.size(); i++){
      for (int j = 0; j < sizeof(vowels); j++){
        if(text[i] == vowels[j]){
          count++;
        }
      }
    }
  
  	cout << "Vowels: " << count;
    return 0;
}
