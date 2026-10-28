#include <iostream>
#include <string>
using namespace std;

int main(){
    string text;
    getline(cin, text);
    
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};
    
    int n = 0;
    
    for(int i = 0; i<text.length(); i++){
        for(int j = 0; j<sizeof(vowels); j++){
            if(tolower(text[i]) == vowels[j]){
                
                cout << text[i] << " and " << vowels[j] << endl;
                n++;
            }
        }
    }
    cout << "There are " << n << " vovewls in " << text << endl;

    return 0;
}