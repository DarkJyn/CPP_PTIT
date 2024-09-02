#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	ll t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+2];
		map<int,int> mp;
		int max = 0;
		for(int i = 0;i< n;++i) {
			cin >> a[i];
			if(a[i] > 0){
				mp[a[i]]++;
				if(a[i] > max) max = a[i];
			}
		}
		for(int i = 1;i <= max + 1;++i){
			if(mp[i] == 0){
				cout << i <<"\n";
				break;
			}
		}
		
	}
}