#include<iostream>
using namespace std;

void solv(int n)
{
    if(n==0) return;

    solv(n/2);
    cout<<n%2;
}

int main()
{
    int n;
    cin>>n;

    while (n--)
    {
        int t;cin>>t;

        solv(t);

        cout<<endl;
        
    }
    
}
