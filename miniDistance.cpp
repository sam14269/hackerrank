#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <stdlib.h>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int d;
    int l=-1;
    cin >> n;
    vector<int> dist;
    vector<int> A(n);
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }
     for(int i = 0;i < n;i++)
         {
            for(int j=i+1;j < n;j++)
             {
                if(A[i]==A[j])
                    {
                        //cout<<i<<" "<<j<<endl;
                        d=j-i;
                        //cout<<d<<endl;
                        dist.push_back(d);
                    }
             }
         } 
         if(dist.size()==0)cout<<l;
         else{
         vector<int> ::iterator it;
         it=min_element(dist.begin(),dist.end());
         cout<<*it;}
    return 0;
}
