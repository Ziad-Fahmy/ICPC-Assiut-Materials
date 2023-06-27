#include <iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){cin>>arr[i];}


    int position=0;
    int low=arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]<low) 
        {
            low =arr[i];
            position =i;
        }
    }
    cout<<low<<" "<<(position+1)<<endl;
}
