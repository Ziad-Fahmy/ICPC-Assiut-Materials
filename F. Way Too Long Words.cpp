#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    string t;
    for(int i=0 ;i<n;i++)
    {
        cin>>t;

        if(t.length()>10)
        {
            int length=t.length();
            cout<<t[0]<<(t.length()-2)<<t[length -1]<<endl;
        }

        else cout<<t<<endl;
    }
}
