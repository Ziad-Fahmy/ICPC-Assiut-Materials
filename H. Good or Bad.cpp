#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;

    for(int i=0;i<n;i++)
    {
        cin>>s;

        bool isGood = false;
        for (int i = 0; i < s.length() - 2; i++) {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') ||
                (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')) {
                isGood = true;
                break;
            }
        }
        if(isGood) cout<<"Good"<<endl;
        else cout<<"Bad"<<endl;
    }
}
