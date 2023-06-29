#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;

    // string rev = reverse(s.begin(),s.end());


    string rev=s;


    reverse(s.begin(),s.end());

    if(s==rev) cout<<"YES";
    else cout<<"NO";
}
