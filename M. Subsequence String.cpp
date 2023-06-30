#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string target) {
    int i = 0, j = 0;
    int n = s.length(), m = target.length();

    while (i < n && j < m) {
        if (s[i] == target[j])
            j++;
        i++;
    }

    return (j == m);
}

int main() {
    string S;
    cin >> S;

    string target = "hello";
    bool exists = isSubsequence(S, target);

    if (exists)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}


/*
another way


#include <iostream>
using namespace std;
int main()
{
    string s,x="hello";
    cin>>s;


    int c=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]==x[c]) c++;
    }

    if(c==5)   //num of char of "hello"
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

*/
