#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;  // Read the number of elements

    int A[N];
    for (int i = 0; i < N; i++) 
    {
        cin >> A[i];  
    }
    int minElement = A[0];
    int minFreq = 1;
    for (int i = 1; i < N; i++) 
    {
        if (A[i] < minElement) 
        {
            minElement = A[i];
            minFreq = 1;
        } 
        else if (A[i] == minElement) 
        {
            minFreq++;
        }
    }
    if (minFreq % 2 == 1) 
    {
        cout << "Lucky" << endl;
    } 
    else 
    {
        cout << "Unlucky" << endl;
    }
}
