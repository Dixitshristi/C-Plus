#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE VALUE : ";
    cin>>n;
    
    for (int i = 1; i <=2*n-1; i=i+2)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
