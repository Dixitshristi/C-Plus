#include<iostream>
using namespace std;
int main()
{
    int l;
    cout<<"ENTER YOUR LENGTH VALUE : " ;
    cin>>l;
    int b;
    cout<<"ENTER YOUR BREATH VALUE : ";
    cin>>b;
    int area = l*b;
    float perimeter=2*(l+b);

    if (area>perimeter)
    {
        cout<<"yes";
    }
    else 
    {
        cout<<"no";
    }
    return 0;
}
