#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int k;
        cin >> k;
        if(s.size() < 26){
            cout <<"0\n";
        }
        else{
            map<int,int> mp;
            int n = s.size();
            int cnt = 0;
            for(int i = 0;i < n;++i){
                mp[s[i] - 'a']++;
            }
            int lost = 0;
            for(int i = 0;i < 26;++i){
                if(mp[i] > 1){
                    cnt += mp[i] - 1;
                }
                else if(mp[i] == 0) lost++;
            }
            if( cnt >= k && k >= lost ) cout <<"1\n";
            else cout << "0\n";
        }
    }
}