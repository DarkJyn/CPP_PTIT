#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("TASK.inp","r",stdin);
	freopen("TASK.out","w",stdout);
	#endif
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		map <int,int> mp;
		for(int i = 0;i < n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int check = 0;
		for(int i = 0;i < n;i++){
			if(mp[k + a[i]]){
				check = 1;
				break;
			}
		}
		if(check == 1) cout << 1 << endl;
		else cout << -1 << endl;
	}	
}