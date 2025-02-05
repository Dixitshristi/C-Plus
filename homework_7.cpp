#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE VALUE : ";
    cin>>n;

    int a=3;
    //cout<<"ENTER THE VALUE : ";
    //cin>>a;

    for (int i = 3; i < n; i++)
    {
        cout<<a<<" ";
        a=a*3;
    }
    
    return 0;
}
