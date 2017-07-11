#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*void delet(char s[],int i,int cntr)
 {
    int len=cntr;
    for(;i<len-1;i++)
    {s[i]=s[i+1];}
    s[i]='\0';
}*/
int main()
{   int n,j;
    cin>>n;
    for(j=0;j<n;j++)
    {
    char s[100000];
    long int i;
    int cntr=0;
    int del=0;
    cin>>s;
    while(s[cntr]!='\0'){cntr++;}
    for(i=0;i<cntr;i++)
        {
            if(s[i]==s[i+1])
            {
                //delet(&s[i],i,cntr);
                del++;
            }
        }
        cout<<del<<endl;
    }
    return 0;
}
