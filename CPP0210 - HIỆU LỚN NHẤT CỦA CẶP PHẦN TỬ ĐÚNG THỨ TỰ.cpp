#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    // era();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int res = -1;
        for(int i = 0;i < n;++i) cin >> a[i];
        for(int i = 0;i < n;++i){
            for(int j = 0;j < i;++j){
                if(a[j] < a[i]){
                    if(res < (a[i] - a[j])) res = a[i] - a[j];
                }
            }
        }
        cout << res<<"\n";
    }
}