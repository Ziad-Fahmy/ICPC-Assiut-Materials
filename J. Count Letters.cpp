#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int letterCount[26] = {0}; 


    for (char c : S) {
        letterCount[c - 'a']++;
    }


    for (int i = 0; i < 26; i++) {
        if (letterCount[i] > 0) {
            char c = 'a' + i;
            cout << c << " : " << letterCount[i] << endl;
        }
    }

    return 0;
}
