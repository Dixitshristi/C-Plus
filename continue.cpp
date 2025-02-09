//print number from 1 to 20 but except 3 and 8.
#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <=20; i++)
    {
        //if (i==3 && i==8)

        if(i==3) continue;
        if(i==8) continue;
        cout<<i<<" ";
    }
    
    return 0;
}
