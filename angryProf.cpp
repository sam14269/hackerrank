#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        
    long int cnt=0;
        long int n;
        long int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++)
           cin >> a[a_i];
        
        for(int j=0;j<n;j++)
            {if(a[j]<=0)
            cnt++;}
        if(cnt<k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
