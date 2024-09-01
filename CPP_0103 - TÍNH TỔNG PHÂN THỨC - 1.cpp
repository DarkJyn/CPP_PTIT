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
    double n;
    cin >> n;
    double res = 0;
    for(int i = 1;i<=n;++i){
        res += 1.0/i;
    }
    cout << fixed << setprecision(4)<<res;
    
}