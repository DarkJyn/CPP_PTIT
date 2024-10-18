#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 998244353
#define endl "\n"

signed main(){
	// cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	int t;
    cin >> t;
    while(t--){
        int n;
		cin >> n;
		int a[n+1];
		for(int i = 0;i < n;++i){
			cin >> a[i];
		}
		int min1 = 1e7;
		int min2;
		for(int i = 0;i < n - 1;++i){
			for(int j = i + 1;j < n;++j){
				if(abs(a[i] + a[j]) < min1){
					min1 = abs(a[i] + a[j]);
					min2 = a[i] + a[j];
				}
			}
		}
		cout << min2;
		cout << endl;
    }
}