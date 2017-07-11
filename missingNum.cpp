#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
 
#define SIZE 20000
using namespace std;
 
 
int main() {
    int a[SIZE];
    for(int i = 0; i<SIZE;i++){
        a[i]=0;
    }
    int N, M;
    cin>>N;
    int temp;
    for(int n=0; n<N; n++){
        cin>>temp;
        a[temp]+=1;
    }
    cin>>M;
    for(int m =0; m<M; m++){
        cin>>temp;
        a[temp]-=1;
    }
    for(int i =0; i<SIZE; i++){
        if(a[i]<0) 
            cout<<i<<" ";
    }
    return 0;
}
