#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, nums[100000];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    vector<int> vec;
    for (int i = 1; i < n; ++i) {
        if (nums[i] < nums[i-1]) {
            if (vec.size() < 2 ||
                i-1-vec.back() == 1) {
                vec.push_back(i-1);
            }
            else {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    
    if (vec.empty()) {
        cout << "yes" << endl;
        return 0;
    }
    int sz    = vec.size(),
        left  = vec[0], 
        right = vec.back() + 1;
    const char* method = (sz <= 2) ? "swap" : "reverse";

    if ((left == 0 || nums[right] >= nums[left-1]) &&
        (right == n - 1 || nums[left] <= nums[right+1]))
        cout<<"yes\n"<<""<<method<<" "<<left + 1<<" "<<right + 1;
    else
        cout<<"no\n";
    return 0;
}

