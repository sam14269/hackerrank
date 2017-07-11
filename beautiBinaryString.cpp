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
    int n,cnt=0;
    cin >> n;
    string B;
    cin >> B;
    //string A="010";
    //size_t t=B.find(A,n);
   for(int i=0;i<n;i++)
    /*{
        
    if(B.find(A))
        cnt++;
   }*/
   {
       if(B[i]=='0' && B[i+1]=='1'&&B[i+2]=='0')
       {
           B[i+2]=1;
            cnt++;
           }
   }
    cout<<cnt;
    return 0;
}
