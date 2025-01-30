#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER YOUR VALUE : ";
    cin>>n;

    if ((n%5==0) || (n%3==0) && (n%15!=0))
    {
        cout<<"Yes,This statement is true";
    }
    else
    {
        cout<<"No";
    }
    
    
    return 0;
}
