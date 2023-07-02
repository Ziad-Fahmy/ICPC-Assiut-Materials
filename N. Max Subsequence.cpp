#include <iostream>
#include <string>
using namespace std;

int getMaxSubsequenceSize(string S) {
    int n = S.length();
    int maxSize = 1;  


    for (int i = 1; i < n; i++) {
        if (S[i] != S[i - 1])
            maxSize++;
    }

    return maxSize;
}

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    int maxSize = getMaxSubsequenceSize(S);
    cout << maxSize << endl;

    return 0;
}
