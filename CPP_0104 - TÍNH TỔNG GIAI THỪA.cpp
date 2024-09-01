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
    ll n;
    cin >> n;
    ll sum = 0;
    ll res = 1;
    for(int i = 1;i<=n;++i){
        res *= i;
        sum += res; 
    }
    cout << sum;
}