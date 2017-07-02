#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int trad_choco=0;
    int trad_wrap=0;
    //cin >> t;
    //for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        int wrap_remain;
        cin >> n >> c >> m;
    //}
    int choco=n/c;
    //cout<<choco<<endl;
    int wrap=choco;
    if(wrap==m)
        {
            choco++;
            cout<<choco<<endl;
        }
    else if(wrap>m)
    {
      wrap_remain=wrap-m;
      trad_choco++;
      trad_wrap++;

      if(wrap_remain+trad_wrap==m)
          {
              trad_choco++;
              cout<<choco+trad_choco<<endl;
          }
      else if(wrap_remain+trad_wrap>m)
               {
                   wrap_remain=wrap_remain-m; 
               }
      else 
            cout<<choco+trad_choco<<endl;
    }
    if(wrap<m)
    cout<<choco<<endl;}
    return 0;
}
