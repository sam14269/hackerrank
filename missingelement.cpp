#include <stdio.h>
#include<iostream>
#define LIMIT 100
using namespace std;
void printnum(int arr[],int n)
{
    bool seen[LIMIT]={false};
    for(int i=0;i<n;i++)
    {
        if(arr[i]<LIMIT)
            seen[arr[i]]=true;
    }
    int i=0;
    while(i<LIMIT)
    {
        if(seen[i]==false)
        {
        int j=i+1;
        while(j<LIMIT&&seen[j]==false)
            j++;
        (i+1==j)?printf("%d\n",i):printf("%d-%d\n",i,j-1);
        i=j;
        }    
    else
        i++;
    }
}
int main()
{
    int arr[]={88, 105, 3, 2, 200, 0, 10};
    int n=sizeof(arr)/sizeof(arr[0]);
    printnum(arr,n);
    return 0;
    
}
