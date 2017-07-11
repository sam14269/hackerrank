#include <bits/stdc++.h>
#include <string>
using namespace std;

string twoStrings(string s1, string s2){
    int count[256];
        for(int i = 0; i < 256; ++i)
           count[i] = 0;
        
        int len = s1.length(); 
        
        for(int i = 0; i <len; ++i)
            count[s1[i] - 'a']++;
        
        len = s2.length();
        string res = "NO";
        
        for(int i = 0; i <len; ++i)
        {
            if(count[s2[i] - 'a'] != 0)
            {
                res = "YES";
                break;
            }
        }
        return res;
        
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        string result = twoStrings(s1, s2);
        cout << result << endl;
    }
    return 0;
}
