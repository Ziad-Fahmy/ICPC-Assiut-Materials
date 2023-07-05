#include<bits/stdc++.h>
using namespace std;

double sum(int n)
{
    double sum = 0.0;
    for(int i = 0; i < n; i++) 
    {
        double value;
        cin >> value;
        sum += value;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    cout << setprecision(8) << sum(n) / n << endl;

    return 0;
}
