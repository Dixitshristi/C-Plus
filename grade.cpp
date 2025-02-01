#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"ENTER YOUR MARKS : ";
    cin>>marks;

    if (marks>81 && marks<=100)
    {
        cout<<"very good";
    }
    else if (marks>61 && marks<=80)
    {
        cout<<"good";
    }
    else if (marks>41 && marks<=60)
    {
        cout<<"average";
    }
    else
    {
        cout<<"fail";
    }
    return 0;
}
