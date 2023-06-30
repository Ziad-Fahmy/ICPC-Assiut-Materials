#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string s,t;
        cin>>s>>t;


        string result;
        int mx=max(s.length(),t.length());

        for(int i=0;i<mx;i++)
        {
            if(i<s.length())
            {
                result += s[i];
            }

            if(i<t.length())
            {
                result += t[i];
            }
        }
        cout<<result<<endl;
    }
}
