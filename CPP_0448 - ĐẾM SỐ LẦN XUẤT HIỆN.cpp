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
        int n,k;
		cin >> n >> k;
		int a[n];
		map<int,int> mp;
		for(int i = 0;i < n;++i){
			cin >> a[i];
			mp[a[i]]++;
		}
		if(mp[k] == 0) cout <<"-1";
		else cout << mp[k];
		cout << endl;
    }
}