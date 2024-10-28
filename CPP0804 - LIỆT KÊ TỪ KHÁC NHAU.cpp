#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
bool cmp(string a, string b){
    return a < b;
}
signed main(){
     cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
     freopen("VANBAN.in","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    vector<string> luu;
    map<string, int> mp;
    string s;
    while((cin >> s)){
    	int len = s.size();
            for(int i = 0; i < len; ++i){
                if(s[i] >= 'A' && s[i] <= 'Z')    s[i] += 'a'-'A';
            }
        if(mp[s] == 0){
            
            luu.push_back(s);
            mp[s] = 1;
        }
    }
    sort(luu.begin(), luu.end(), cmp);
    for(auto x:luu) cout << x << "\n";
    
}