#include <iostream>
#include<algorithm>
using namespace std;

void Swab(int x,int y)
{
    
    swap(x,y);
    cout<<x<<" "<<y;
}


int main()
{
    int x,y;cin>>x>>y;

    Swab(x,y);

}
