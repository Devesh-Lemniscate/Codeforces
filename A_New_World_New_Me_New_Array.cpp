#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, p, k;
        cin >> n >> p >> k;
        n = abs(n), p = abs(p), k = abs(k);
        int ans = p/k + ((p%k)?1:0);
        cout << ((p > n*k)? -1 : ans) << endl;
    }
    return 0;
}