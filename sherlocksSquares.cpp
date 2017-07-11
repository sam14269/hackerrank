#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int N;
cin >> N;
while(N--){
int min, max;
cin >> min >> max;
int Squares = 0;
int i = 1;
int square = pow(i, 2);
while(square <= max){
if(square < min){}
else {Squares++;}
i++;
square = pow(i,2);
}
cout <<Squares << endl;
}
return 0;
}
