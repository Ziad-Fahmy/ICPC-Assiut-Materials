#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    long long n;cin>>n;

    double res=log2(n)/log2(2);   //we can't let log with out"2" becuse default base is 10 not 2


    if((res-(int)res) !=0) cout<<"NO"<<endl;   //(int)res  >>>>>  to convert to integer
    else cout<<"YES"<<endl;

}
