#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
int i,n,p;
cin>>n;
int max=0;
vector <int> vec;
for(i=0;i<n;i++){
    cin>>p;
    vec.push_back(p);
}
///sort(vec.begin(),vec.end());
//for(i=0;i<n;i++){
//    cout<<vec[i];
//}
vector<int>::iterator it=max_element(vec.begin(),vec.end());;
//cout<<endl<<*it;
for(i=0;i<n;i++)
    {
       if(vec[i]==*it)
            max++;
    }
cout<<max;
return 0;
}
