#include <iostream>
using namespace std;
int x(int n){
    if(n<=1) return n;
   
    return x(n-1)+x(n-2);
}
int main(){
    int n; cin >> n;
    cout << x(n);
}