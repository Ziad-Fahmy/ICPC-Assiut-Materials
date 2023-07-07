#include <iostream>
#include <cmath>

using namespace std;

long long sumtion(long long N) {
    long long sum = 0;

    for (long long i = 1; i <= sqrt(N); i++) {
        if (N % i == 0) {
            sum += i;

            if (i != N / i) {
                sum += N / i;
            }
        }
    }

    return sum;
}

int main() {
    long long N;
    cin >> N;

    long long result = sumtion(N);

    cout << result << endl;

    return 0;
}





