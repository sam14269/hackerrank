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
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long int d;
    string s;
    cin >> s;
    long long int n;
    cin >> n;
    //cout<<n<<endl;
    long long int len=s.length();
    long long int cnt=0,cnt1=0,res;
    for(long long int i=0;i<len;i++)
    {if(s[i]=='a')cnt++;}
   // cout<<cnt;
    d=n/len;
    //cout<<d<<endl;
    //res=d*cnt;
    long long int p=n%len;
    //cout<<p<<endl;
    for(long long int i=0;i<p;i++)
    {if(s[i]=='a')cnt1++;}
    res=(d*cnt)+cnt1;
    cout<<res;
    return 0;
}
