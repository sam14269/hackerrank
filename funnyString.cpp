#include <cmath>
#include <cstdio>
#include <vector>
#include<cstring>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    char S[20000];
    char R[20000];
    //char temp[100];
    int cnt,i,j,n;
    cin>>n;
    for(int p=0;p<n;p++)
    {
    cin>>S;
    cnt=0;
    j=0;
    while(S[cnt]!='\0'){cnt++;}
   // cout << cnt;
    for(i=cnt-1;i>=0;i--)
        {
        R[i]=S[j];
        j++;
        }
    //cout << S <<"\n" << R;
    for(j=1;j<=cnt-1;j++)
    {
        if(abs(S[j]-S[j-1])==abs(R[j]-R[j-1]) )
        {
           // cout << j << "\n";
        //cout<<"Funny"<<endl;
        }
        else {
            break;
                //cout<<"Not Funny"<<endl;
        }
       // break;
    }
    //cout << cnt;
    if (j == cnt)
        cout << "Funny"<<endl;
    else
        cout << "Not Funny"<<endl;
    }
    return 0;
}
