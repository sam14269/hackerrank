#include <iostream>

using namespace std;

int main()
{
   int n,k,a[100],cnt=0,temp=0;
   cin>>n>>k;
   for(int i=0;i<n;i++)
    cin>>a[i];

   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
   {
       temp=0;
       temp=a[i]+a[j];
        if(temp%k==0)
            cnt++;

   }
   }
   cout<<cnt;
   return 0;
}
