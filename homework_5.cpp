include<iostream>
using namespace std;
int main()
{
    int ram;
    cout<<"ENTER RAM AGE : ";
    cin>>ram;

    int shyam;
    cout<<"ENTER SHYAM AGE : ";
    cin>>shyam;

    int ajay;
    cout<<"ENTER AJAY AGE : ";
    cin>>ajay;

    if (ram<shyam)
    {
        if (ram<ajay)
        {
            cout<<ram<<" RAM IS YOUNGEST THEN AJAY ";
        }
        else
        {
            cout<<ajay<<" AJAY IS YOUNGEST THEN RAM ";
        }
        
    }
    else
    {
        if (shyam<ajay)
        {
            cout<<shyam<<" SHYAM IS YOUNGEST THEN AJAY";
        }
        else
        {
            cout<<ajay<<" AJAY IS YOUNGEST THEN SHYAAM";
        }
        
        
    }
    

    return 0;
}
