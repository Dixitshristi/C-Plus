#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"ENTER YOUR a VALUE : ";
    cin>>a;
    int b;
    cout<<"ENTER YOUR b VALUE : ";
    cin>>b;
    int c;
    cout<<"ENTER YOUR c VALUE : ";
    cin>>c;

    if (a<b && a<c)
    {
        cout<<c;
    }
    else if (b<a && b<c)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }
    return 0;
}
