#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string target) {
    int i = 0, j = 0;
    int n = s.length(), m = target.length();

    while (i < n && j < m) {
        if (s[i] == target[j])
            j++;
        i++;
    }

    return (j == m);
}

int main() {
    string S;
    cin >> S;

    string target = "hello";
    bool exists = isSubsequence(S, target);

    if (exists)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
