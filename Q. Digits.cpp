#include <iostream>
using namespace std;
int main()
{
    int t,n;cin>>t;

    while(t--)
    {
        cin>>n;

        if(n==0) 
        {
            cout<<"0"<<endl;
            continue;
        }

        while(n>0)
        {
            int digit=n%10;
            cout<<digit<<" ";
            n/=10;
        }
        cout<<endl;
    }
}
