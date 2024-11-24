#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("DATA.in","r",stdin);
    map<int, int> mp;
    int n;
    while(cin >> n){
        mp[n]++;
    }
    for(auto x : mp) cout << x.first << " " << x.second << endl;
    return 0;
}