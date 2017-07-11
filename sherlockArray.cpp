#include <stdio.h>
#include<iostream>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T)
        {
        bool flag = false;
        int sum = 0;
        int left = 0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            {
            cin>>a[i];
            sum+=a[i];
        }
        
         for(int i=0;i<n;i++)
            {
                sum=sum-a[i];
                if(left==sum)
                    {
                    flag=true;
                    break;
                    }
                left=left+a[i];
            }
         //cout<<sum<<"    "<<left;
        if(flag)
                cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
            T--;
    }   
    return 0;
}
