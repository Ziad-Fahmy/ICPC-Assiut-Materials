#include <iostream>
#include <string>
#include<bitset>
using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool isWonderful(int n) {
    if (n % 2 == 0) {
        return false;
    }
    string binary = bitset<32>(n).to_string();  // Convert n to its binary representation
    binary = binary.substr(binary.find('1'));  // Remove leading zeros
    return isPalindrome(binary);
}

int main() {
    int n;
    cin >> n;

    if (isWonderful(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
