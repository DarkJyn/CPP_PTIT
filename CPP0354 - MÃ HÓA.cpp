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
		string s;
		cin >> s;
		ll n = s.size();
		s = s + " ";
		int cnt = 0;
		for(ll i = 0;i < n;++i){
			cnt++;
			if(s[i+1] != s[i]){
				cout << s[i] << cnt;
				cnt = 0;
			}
		}
		cout << endl;
	}
}