
// recursion meen that we make a method like for loop and use it more than one time



#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0) return;
    cout<<"I love Recursion"<<endl;

    print(n-1);
}

int main()
{
    int n;cin>>n;
    print(n);
}





/*

<<this is direct way(we need recursion)>>

#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;

    for(int i=0;i<n;i++) cout<<"I love Recursion"<<endl;
}
*/
