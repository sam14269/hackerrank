#include <bits/stdc++.h>
using namespace std;
class stackss{
    const static int max_size=50;
    int arr[max_size];
    int top=0;
public:
stackss();
    virtual void push(int);
    virtual int pop();
};
stackss::stackss()
{
    top=-1;
}
void stackss::push(int remainder)
{
    if(top<max_size-1)
        arr[++top]=remainder;
    else
        cout<<"overflow"<<endl;
}
int stackss::pop()
{
    if(top>=0)
    {
        int out=arr[top--];
        return out;
    }
    else
        cout<<"underflow"<<endl;
}
int main()
{
    stackss st;
    stackss strev;
    int str[10];
    int i,len;
    //len=str/str[0];
    //cout<<len;
    cout<<"ntr array val:";
    for(i=0;i<10;i++)
    {cin>>str[i];}
    for(i=0;i<10;i++)
    {strev.push(str[i]);}
    for(i=0;i<10;i++)
         cout<<strev.pop()<<" ";
    int decimal;
    cin>>decimal;
    for(i=0;i<10;i++)
        {
            st.push(decimal%2);
            decimal=decimal/2;
        }
     for(i=0;i<10;i++)
         cout<<st.pop()<<"";
    return 0;
}