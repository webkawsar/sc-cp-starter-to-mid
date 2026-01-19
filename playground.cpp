#include <iostream>
using namespace std;

int main() {
    
    string word;
    getline(cin, word);

    string modifiedWord  = "";
    for (char c : word) {
        if(c != ' ') {
            modifiedWord += c;
        }
    }

    cout << modifiedWord;

    
}
