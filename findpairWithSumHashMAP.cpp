#include <bits/stdc++.h>
using namespace std;
#define SIZE 100;
void printelement(int arr[],int len,int sum)
{
    int i,temp;
    bool binMap[SIZE] = {0};
    for(int i=0;i<len;i++)
    {
        temp=sum-arr[i];
        if(temp>=0&&binMap[temp]==0)
          {  cout<<arr[i]<<temp;}
        binMap[arr[i]]=1;
    }
}
int main(int argc, char **argv)
{
int arr[]={10,20,30,4,5,60};
int len=6;
int sum=80;
printelement(arr,len,sum);
return 0;
}
