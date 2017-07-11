#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
void insertionSort(vector <int>  ar) {
    int array_size = ar.size(); 
 
    for (int i = array_size - 1; i >= 1; i--){
        for (int j = i - 1; j >= 0; j--){
            if (ar.size() == array_size && ar.at(i) < ar.at(j) ){
                ar.insert(ar.begin() + i, ar.at(j));
                ar.push_back(ar.at(i + 1));
                ar.erase(ar.begin() + i + 1);
 
                for (int k = 0; k < array_size; k++){
                    cout << ar.at(k) << " ";
                }
                cout << endl;
            }
            else if (ar.size() == array_size + 1 && ar.at(j) < ar.back()){
                ar.insert(ar.begin() + j + 1, ar.back());
                ar.erase(ar.begin() + j + 2);
                ar.pop_back();
 
                for (int k = 0; k < array_size; k++){
                    cout << ar.at(k) << " ";
                }
                cout << endl;
                i++;
                break;
            }
            else if (ar.size() == array_size + 1 && j == 0){
                ar.insert(ar.begin() + j, ar.at(j));
                ar.erase(ar.begin() + j + 2);
                
                for (int k = 0; k < array_size; k++){
                    cout << ar.at(k) << " ";
                }
                cout << endl;
 
                ar.insert(ar.begin(), ar.back());
                ar.erase(ar.begin() + 2);
                ar.pop_back();
 
                for (int k = 0; k < array_size; k++){
                    cout << ar.at(k) << " ";
                }
                cout << endl;
                i++;
            }
            else if (ar.size() == array_size + 1 && ar.at(j) > ar.back()){
                ar.insert(ar.begin() + j, ar.at(j));
                ar.erase(ar.begin() + j + 2);
 
                for (int k = 0; k < array_size; k++){
                    cout << ar.at(k) << " ";
                }
                cout << endl;
            }}
    }}
 
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for (int _ar_i = 0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }
 
    insertionSort(_ar);
 
    return 0;
}
