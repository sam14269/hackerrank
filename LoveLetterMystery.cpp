
#include <bits/stdc++.h>
using namespace std;
int theLoveLetterMystery(string &str){
    int changes = 0;
     
    int mid = str.length()/2;
    int len = str.length();
     
    for (int i=0; i < mid; i++){
        int diff = abs(int(str.at(i)) - int(str.at(len-i-1)));
        changes += diff;
    }
     
    return changes;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result =theLoveLetterMystery(s);
        cout << result << endl;
    }
    return 0;
}

