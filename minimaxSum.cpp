#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{

int i,j,n,p;
int max=0;
int min=0;
vector <int> vec;
for(i=0;i<5;i++){
    cin>>p;
    vec.push_back(p);
}
sort(vec.begin(),vec.end());

for(i=0;i<4;i++)
    min=min+vec[i];
cout<<endl<<min;

for(i=5;i>=1;i--)
    max=max+vec[i];
cout<<endl<<max;
return 0;
}
