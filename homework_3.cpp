//TAKE POSITIVE INTEGER INPUT AND TELL IF IT DIVISIBLE BY 5 OR NOT.
#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"ENTER YOUR VALUE : ";
    cin>>y;

    if (y%5==0)
    {
        cout<<"THIS IS DIVISIBLE BY 5";
    }
    else
    {
        cout<<"THIS IS NOT DIVISIBLE BY 5";
    }
    return 0;
}
