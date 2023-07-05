#include<iostream>
#include<cmath>
using namespace std;

long long calc(int n,int po)
{
    long long sum=0;
    for(int i=2;i<=po;i+=2)
    {
        sum += pow(n,i);
    }

    return sum;
}


int main()
{
    int n,po;cin>>n>>po;

    cout<<calc(n,po)<<endl;
}
