#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
    
int cntapp=0;
int cntora=0;
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> app(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> app[apple_i];
    }
    vector<int> ora(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> ora[orange_i];
    }
///apple
for(int i=0;i<m;i++)
{
    int onhouseapp=a+app[i];
    if(onhouseapp>=s&&onhouseapp<=t)
        cntapp++;
}
cout<<cntapp;
cout<<endl;
for(int i=0;i<n;i++)
{
    int onhouseora=b+ora[i];
    if(onhouseora>=s&&onhouseora<=t)
        cntora++;
}
cout<<cntora<<endl;
return 0;
}
