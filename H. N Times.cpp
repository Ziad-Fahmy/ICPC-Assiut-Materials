#include<iostream>
using namespace std;

void times(int n,char c)
{
    for(int i=0;i<n;i++) cout<<c<<" ";

    cout<<endl;
}
int main()
{
    int t;cin>>t;

    while (t--)
    {
        int n;
        char c;
        cin>>n>>c;

        times(n,c);
    }
    
    
}
