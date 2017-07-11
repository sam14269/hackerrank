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
#include <unordered_map>

using namespace std;


int main(){
    string S;
    cin >> S;
    int ans = 0;
    for(int i=0;i<S.size();i+=3){
        string temp = S.substr(i,3);
        if(temp[0] != 'S') ans++;
        if(temp[1] != 'O') ans++;
        if(temp[2] != 'S') ans++;
    }
    cout<<ans;
    return 0;
}
