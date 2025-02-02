include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"ENTER YOUR FIRST NUMBER : ";
    cin>>n1;

    char op;
    cout<<"ENTER YOUR OPERATOR (+,-,*,/)";
    cin>>op;

    int n2;
    cout<<"ENTER YOUR SECOND NUMBER : ";
    cin>>n2;

    switch (op)
    {
    case '+':
        cout<<n1+n2;
        break;
    case '-':
        cout<<n1-n2;
        break;
    case '*':
        cout<<n1*n2;
        break;
    case '/':
        cout<<n1/n2;
        break;
    
    default:
        cout<<"INVALID OPERATOR";
        break;
    }

    return 0;
}
