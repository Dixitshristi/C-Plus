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

    if ((a+b)>c && (b+c)>a && (c+a)>b)
    {
        cout<<"Yes,This is triangle";
    }
    else
    {
        cout<<"No";
    }
    
    return 0;
}
