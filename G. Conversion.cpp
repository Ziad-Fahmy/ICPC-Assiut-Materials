#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==',') s[i]=' ';
    }

    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i])) 
        {
            s[i]=tolower(s[i]);
        }

        else s[i]=toupper(s[i]);
    }

    cout<<s;

}
