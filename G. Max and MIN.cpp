#include<iostream>
using namespace std;

void fmaxMin(int arr[], int n,int& minimum,int& maximum )
{
    minimum=maximum=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]<minimum) minimum =arr[i];

        if(arr[i]>maximum) maximum =arr[i];
        
    }

}


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    int maximum,minimum;


    fmaxMin(arr,n,minimum,maximum);

    cout<<minimum<<" "<<maximum;



}



/*
another way

1-sort an array 
2-get first element "smallest one"
3-get last element "biggist one"





#include<iostream>
#include<algorithm>
using namespace std;

void sorting(int arr[],int size)
{
    sort(arr,arr+size);
}


int main()
{
    int size;cin>>size;

    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    sorting(arr,size);

    cout<<arr[0]<<" "<<arr[size-1];


}


*/
