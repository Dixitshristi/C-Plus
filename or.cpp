#include<iostream>
using namespace std;
int main()
{
    int e;
    cout<<"ENTER YOUR VALUE : ";
    cin>>e;

    if (e%5==0 || e%3==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
        return 0;
}
