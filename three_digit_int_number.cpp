#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout<<"ENTER YOUR NUM VALUE : ";
    cin>>num;

    if (num>99 && num<999)
    {
        cout<<"Yes, it is a three digit integer number";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
