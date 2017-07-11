#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   long long int n,i,j,k;
   int cnt=0;
   int d;
   cin>>n>>d;
   long long int a[n];
   for(i=0;i<n;i++)
       cin>>a[i];
   for (i = 0; i <= n-3; ++i) {
        for (j = i+1; j <= n-2; ++j) {
            if (a[j] - a[i] == d) {
                for (k = j+1; k <= n-1; ++k) {
                    if (a[k]-a[j] == d) {
                        cnt++;
                        break;
                    } else if (a[k]-a[j] > d) {
                        break;
                    }
                }
            } else if (a[j] - a[i] > d) {
                break;
            }
        }
    }
   cout<<cnt;
    return 0;
}
