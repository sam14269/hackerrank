#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> v;
    vector <int> ::iterator it;
    int p,N;
    cin>>N;
    for(int i=0;i<N;i++)
       {cin>>p;v.push_back(p);}
    sort(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    return 0;
}
