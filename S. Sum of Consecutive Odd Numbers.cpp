#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b; 
        cin>>a>>b;
        int x=min(a,b);
        int z=max(a,b);
        long long sum=0;
        for(int i=x+1;i<z;i++)  //x and y not included 
        {
            if(i%2==1) 
            {
                sum+=i;
            }
        }
        cout<<sum<<endl;;

    }

}
