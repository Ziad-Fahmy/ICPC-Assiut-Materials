#include <iostream>
#include<vector>
#include<algorithm>  //for using equal 
using namespace std;
int main()
{
    int n;cin>>n;
    int x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        
    }


vector<int> rev(arr.rbegin(), arr.rend());   //creat new vector with name rev 

    if(equal(arr.begin(), arr.end(), rev.begin())) cout<<"YES"<<endl;
    // if(arr.begin()==arr.end()==rev.rend()) cout<<"YES"<<endl;

    else cout<<"NO"<<endl;
}
