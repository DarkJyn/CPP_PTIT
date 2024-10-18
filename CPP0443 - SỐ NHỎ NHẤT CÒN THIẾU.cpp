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
		int a[n];
		map<int,int> mp;
		for(int i = 0;i< n-1;++i){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i = 1;i <=n;++i){
			if(mp[i] == 0){
				cout << i;
				break;
			}
		}
		cout << endl;
    }
}