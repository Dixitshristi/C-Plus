#include<iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"ENTER YOUR CP VALUE : ";
    cin>>cp;
    int sp;
    cout<<"ENTER YOUR SP VALUE : ";
    cin>>sp;
    //conditional statements
    if (sp>cp)
    {
        cout<<"PROFIT is "<<sp-cp<<endl;
    }
    else if (sp<cp)
    {
        cout<<"LOSS is " << cp-sp <<endl;
    }
    else //(sp==cp)
    {
        cout<<"NO PROFIT & NO LOSS ";
    }
    return 0;
}
