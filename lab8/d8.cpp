#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    int a;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    
    cin >> a;
    v.erase(v.begin()+a);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}