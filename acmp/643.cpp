#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int k=n;
    int cnt=0; 
    while(n!=0){
        if(n%2==1) cnt++;
        n/=2;
    }
    cout << k+cnt;
}