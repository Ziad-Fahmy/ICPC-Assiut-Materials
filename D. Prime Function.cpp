#include<iostream>
using namespace std;

bool isprime(int x)
{
    if(x<=1) return false;

    for(int i=2;i*i<=x ;i++) if(x%i==0) return false;
    return true;
}

int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(isprime(x)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
