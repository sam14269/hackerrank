#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int M,N,T,i,j;
  int sum=0;
  cin>>T;
  while(T--)
  {
  cin>>M;
  cin>>N;
  int a[N];
  for(i=0;i<N;i++)
        cin>>a[i];
  for(i=0;i<N-1;i++)
      {
          sum=0;
        for(j=i+1;j<N;j++)
          {sum=0;
            sum=sum+a[i]+a[j];
            //cout<<sum<<" *** "<<M<<endl;
            if(sum==M)
                {cout<<i+1<<" "<<j+1<<endl;break;}
          }//cout<<sum<<" *** "<<M<<endl;
    }
  }
 
    return 0;
}
