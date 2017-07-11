#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{   int x,v,n,i,a[100];
 cin>>v;
 cin>>n; 
 for(i=0;i<n;i++)
     {
     cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
     if(a[i]==v)
     {   x=i;
     } 
   
 }
 cout<<x;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
