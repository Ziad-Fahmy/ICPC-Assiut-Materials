#include <iostream>

using namespace std;

int findSmallestSum(int A[], int N) {
    int smallestSum = INT_MAX;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int sum = A[i] + A[j] + j - i;
            smallestSum = min(smallestSum, sum);
        }
    }

    return smallestSum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int smallestSum = findSmallestSum(A, N);
        cout << smallestSum << endl;
    }

    return 0;
}
