
#include <iostream>
#include <string>
using namespace std;

int countWords(string s) {
    int count = 0;
    bool insideWord = false;

    for (char c : s) {
        if (c == ' ' || c == '!' || c == '.' || c == '?' || c == ',') {
            insideWord = false;
        } else {
            if (!insideWord) {
                count++;
                insideWord = true;
            }
        }
    }

    return count;
}

int main() {
    string S;
    getline(cin, S);

    int wordCount = countWords(S);
    cout << wordCount << endl;

    return 0;
}
