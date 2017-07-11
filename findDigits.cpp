#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,n1,n2,d,count=0,i=0;
    cin>>n;
    while(i<n)
        {   cin>>n2;
            n1=n2;
            while(n2)
                 {  d=n2%10;
                    n2=n2/10;
                    if(d!=0)
                    if(n1%d==0)
                    count++;
                 }
        cout<< count<<endl;
        count=0;
        i++;
        }
  
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
