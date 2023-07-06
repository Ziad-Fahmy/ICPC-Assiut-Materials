#include <iostream>
#include<algorithm>
using namespace std;

void shiftRight(int arr[], int n, int x)
{
    x %= n; // In case x is larger than n, take the modulo
    
    // Reverse the entire array
    reverse(arr, arr + n);
    
    // Reverse the first x elements
    reverse(arr, arr + x);
    
    // Reverse the remaining elements
    reverse(arr + x, arr + n);
}

int main()
{
    int n, x;
    cin >> n >> x;
    
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    shiftRight(arr, n, x);
    
    // Print the shifted array
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}


