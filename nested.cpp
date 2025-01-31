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

    if (a>b)
    {
        if (a>c)
        {
            cout<<endl;
            cout<<a<<" a is greatest than c "<<endl;
        }
        else
        {
            cout<<endl;
            cout<<c<<" c is greatest"<<endl;
        }
        
    }
    else
    {
        if (b>c)
        {
            cout<<endl;

            cout<<b<<" b is greatest than c"<<endl;
        }
        else
        {
            cout<<endl;
            cout<<c<<" c is greatest"<<endl;
        }
        
    }
    

    return 0;
}
