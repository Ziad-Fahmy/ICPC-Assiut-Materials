#include <iostream>
using namespace std;
int main()
{
    int n,mx=-1e5,mn=1e5;cin>>n;

    int arr[n];

    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];

        if(arr[i]>mx) mx=arr[i];
        if(arr[i]<mn) mn=arr[i];

    }
    for(int i=0;i<n;i++) 
    {
        if(arr[i]==mx) cout<<mn<<" ";

        else if(arr[i]==mn) cout<<mx<<" ";

        else cout<<arr[i]<<" ";
    }
}
