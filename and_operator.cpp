#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER YOUR VALUE : ";
    cin>>n;

    if (n%5==0 && n%3==0)
    {
        cout<<"Yes, This is divisible by 5 and 3";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
