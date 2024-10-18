#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

ll gcd11(ll a, ll b){
    while(b != 0){
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
ll lcm11(ll a, ll b){
    return a * b / gcd11(a,b);
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll res = 1;
        for(ll i = 1;i <= n;++i){
            res = lcm11(res,i);
        }
        cout << res<<"\n";
    }
}