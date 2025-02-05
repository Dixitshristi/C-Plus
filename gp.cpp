#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"ENTER THE VALUE : ";
    cin>>m;

    int a = 1;
    for (int i = 1; i <=m; i++)
    {
        cout<<a<<" ";
        a=a*2;
    }
    
    return 0;
}
