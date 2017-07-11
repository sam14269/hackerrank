#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */

int pairs(vector < int > a,int k) {
   long int ans=0;
   long long int diff;
    vector<int> ::iterator it,im;
    /*for(it=a.begin();it!=a.end();++it)
    {   
        if(==*it)continue;
                if(b>*it)continue;
                diff=*it-b; 
                cout<<diff<<"  "; 
                if(diff==k)
                    ans++;
                    cout<<"\n";           
    }*/
    sort(a.begin(),a.end());
    for(it=a.begin();it!=a.end();++it)
        if(binary_search(a.begin(), a.end(), *it+k)) ans++;
    //cout<<ans<<"*";
    return ans;
}
int main() {
    int res;
    
    int _a_size,_k;
    cin >> _a_size>>_k;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = pairs(_a,_k);
    cout << res;
    
    return 0;
}
