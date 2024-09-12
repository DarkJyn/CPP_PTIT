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
		int min1 = 1e8;
		int min2 = 1e7;
		for(int i = 0;i < n;++i){
			cin >> a[i];
			if(a[i] < min1) min1 = a[i];
		}
		for(int i = 0;i < n;++i){
			if(a[i] < min2 && a[i] > min1){
				min2 = a[i];
			}
		}
		if(min2 != 1e7) cout << min1 <<" " << min2;
		else cout <<"-1";
		cout << endl;
    }
}