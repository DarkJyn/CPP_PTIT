#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for(ll i = 0;i < n;++i){
            cin >> a[i];
        }
        ll res = -1e18;
        for(ll i = 0;i < n;++i){
            ll tmp = 1;
            for(ll j = i; j < n;++j){
                tmp *= a[j];
                if(tmp > res) res = tmp; 
            }
        }
        cout << res <<"\n";
    }    
}