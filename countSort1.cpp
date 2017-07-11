#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <long int> v,cntr;
    vector <long int>::iterator it,ip;
    long int i,n,p,cnt=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>p;
        v.push_back(p);
    }
    //for(it=v.begin();it!=v.end();++it)
    //    cout<<*it<<" ";
    for(i=0;i<100;i++)
    {   cnt=0;
        for(ip=v.begin();ip!=v.end();++ip)
            {
                if(i==*ip)
                cnt++;
            }
        cout<<cnt<<" ";
        //cntr.push_back(cnt);
    }
        
   // for(it=cntr.begin();it!=cntr.end();++it)
     //   cout<<*it<<" ";
    return 0;
}
