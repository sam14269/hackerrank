#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<strings.h>
#include<string.h>
using namespace std;
int count[26]={0};
 void f(char s[])
{ 
     long int c=0;
   while ( c<=strlen(s) )
    {
      if ( s[c] >= 'a' && s[c] <= 'z' )
         ::count[s[c]-'a']=1;
         else
if( s[c] >= 'A' && s[c] <= 'Z' )
::count[s[c]-'A']=1;
      c++;
   }
}
 
int main() {
    char s[1000];
    gets(s);
    int flag=0,i;
    f(s);
    for(i=0;i<26;i++)
    {    if(::count[i]!=1)
            flag=1;
    }
     if(flag==1)
        cout<<"not pangram\n";
    else
        cout<<"pangram\n";
    
return 0;
}
