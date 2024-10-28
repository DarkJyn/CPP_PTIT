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
		int n,k;
		cin >> n >> k;
		int a[n*n]; 
		for(int i = 0; i < n * n; i++) cin >> a[i];
		sort(a,a + n*n);
        cout << a[k-1]<<"\n";
	}
}