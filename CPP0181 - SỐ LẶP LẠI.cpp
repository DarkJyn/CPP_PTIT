#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

ll ucln(ll a,ll b){
    while(b != 0){
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    int t;
    cin >> t;
    while(t--){
        ll n,x,y;
        cin >> n >> x >> y;
        ll k = ucln(x,y);
        for(int i = 0;i < k;++i){
            cout << n;
        }
        cout <<"\n";
    }
}