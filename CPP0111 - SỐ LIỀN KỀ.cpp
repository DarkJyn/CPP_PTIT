#include <bits/stdc++.h>

using namespace std;

using ll = unsigned long long;

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
        int check = 1;
        if(s.size() == 1) {
            cout <<"YES\n";
            continue;
        }
        for(int i = 0;i < s.size()-1;++i){
            if(abs((int)(s[i]-s[i+1])) != 1){
                check = 0;
                break;
            }
        }
        if(check) cout <<"YES\n";
        else cout <<"NO\n";
    }
}