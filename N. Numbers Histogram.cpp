#include <iostream>
using namespace std;
int main()
{
    char s;
    int a,b;
    cin>>s>>a;


    for(int i=0;i<a;i++)
    {
        cin>>b;
        string rep(b,s);    //b is the time you want to repeat char s >>>>this is not library
        cout<<rep<<endl;
    }
    
}
