#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int cnt[26];
 
int main() {
 
string s;
cin>>s;
 
int flag = 0;
 
for (int i = 0; i < (int)s.size(); i++)
cnt[s[i] - 'a']++;
int even = 0, odd = 0;
for (int i = 0; i < 26; i++)
{
if (cnt[i] % 2 == 0) even++;
else odd++;
}
 
if(odd<2)
cout<<"YES";
else
cout<<"NO";
return 0;

}
