#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    int start = 0;
    int end = 0;
    int length = S.length();

    while (end < length) {

        start = S.find_first_not_of(' ', end);
        end = S.find(' ', start);


        if (end == string::npos) {

            reverse(S.begin() + start, S.end());
        } else {
            reverse(S.begin() + start, S.begin() + end);
        }


        if (end == string::npos) {
            break;
        }
    }

    cout << S << endl;

    return 0;
}
