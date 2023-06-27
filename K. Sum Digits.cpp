#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;cin>>n;

    string x;cin>>x;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=x[i]-'0';
    }

    cout<<sum;
}
