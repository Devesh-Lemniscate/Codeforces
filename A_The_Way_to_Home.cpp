#include <bits/stdc++.h>
using namespace std;

int help(string &str, int idx, int d){
    if(idx==str.size()-1) return 0;
    int minIdx = -1;
    for(int i = min((int)str.size()-1, idx+d); i > idx; i--){
        if(str[i]=='1'){
            minIdx = i;
            break;
        }
    }
    if(minIdx==-1)return -1;
    int ans = help(str, minIdx, d);
    return (ans==-1)?-1: ans+1;
}

int main(){
    int n, d;
    cin >> n >> d;
    string str = "";
    cin >> str;
    cout << help(str, 0, d) << endl;
    return 0;
}