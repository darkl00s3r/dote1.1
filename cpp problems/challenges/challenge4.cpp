#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "Word: ";
    string word;
    getline(cin, word);

    cout << word << " have " << word.length() << " letter(s)" << endl;
    cout << "The first letter is '" << word[0] <<"' and the last letter is '"<< word[word.length()-1]<< "'" << endl;

    return 0;
}
