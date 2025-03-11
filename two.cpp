#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"ENTER YOUR ROW VALUE :";
    cin>>m;
    
    int n;
    cout<<"ENTER YOUR COLUMN VALUE : ";
    cin>>n;

    for (int i = 1; i <=m; i++)
{
    for (int i = 1; i <=n; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}
