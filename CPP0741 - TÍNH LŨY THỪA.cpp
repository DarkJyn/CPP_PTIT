#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
ll p;
ll sqr(ll a){
    return (a*a)%p;
}
ll poww(ll a, ll n){
    if(n == 0)  return 1;
    if(n%2 == 0)    return sqr(poww(a, n/2) % p) % p;
    return (a % p * sqr(poww(a, n/2) % p))%p ;
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
        ll x,y;
        cin >> x >> y >> p;
        cout << poww(x,y);
        cout <<"\n";
    }
}