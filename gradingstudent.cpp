#include <iostream>
using namespace std;
void round(int grade,int newvalue)
{
    int newgrade;
    if(grade<38)
                    {
                        newgrade=grade;
                        cout<<newgrade<<endl;
                    }
    else if(38<=grade&&grade<=100)
                    {
                        if(newvalue-grade<3)
                            {newgrade=newvalue;cout<<newgrade<<endl;}
                        else if((newvalue-grade==3)||(newvalue-grade>3))
                            cout<<grade<<endl;
                    }
    else
                    cout<<"invalid"<<endl;
}
int main(int argc, char **argv)
{
    int n,grade;
    int newvalue;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
            cin>>grade;
            newvalue=((grade/5)+1)*5;
            round(grade,newvalue);
    }
    return 0;
}
