#include <iostream>

using namespace std;

int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if(v2>v1)
        cout<<"NO";
    else{
    while(x1<=x2)
    {if(x1==x2)
    {
        cout<<"YES";
        break;
    }
    x1=x1+v1;
    x2=x2+v2;
    }
    if(x1>x2)
        cout<<"NO";
    }
    return 0;
}
