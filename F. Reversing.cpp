#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>arr(n);      //it's like int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    reverse(arr.begin(), arr.end());

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}





/*
another solution





#include<iostream>
#include <algorithm>  //for using reverse
#include <vector>       //for usinf vector 
using namespace std;
int main()
{
    int n;
    cin>>n;


    vector<int>arr(n);      //it's like int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    reverse(arr.begin(), arr.end());

    for(int number: arr)
    cout<<number<<" ";

}

*/
