#include<iostream>
using namespace std;

void newArr(int a[],int b[],int c[],int n)
{
    for(int i=0;i<n;i++)
    {
        c[i]=b[i];
    }
    for(int i=0;i<n;i++) c[i+n]=a[i];
}

int main()
{
    int n;cin>>n;

    int a[n],b[n],c[2*n];

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
  
    newArr(a,b,c,n);

    for(int i=0 ;i<2*n;i++) cout<<c[i]<<" ";
}
