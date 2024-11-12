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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        for(int i = 0;i < n;++i){
            cin >> a[i];
        }
        int dp[n + 2];
        int res = -1;
        // memset(dp,0,sizeof(dp));
        for(int i = 0;i < n;++i){
            dp[i] = 1;
            for(int j = 0;j < i;++j){
                if(a[j] < a[i]){
                    dp[i] = max(dp[i],dp[j] + 1);
                }
            }
            res = max(res, dp[i]);
        }
        cout << res <<"\n";
    }    
}