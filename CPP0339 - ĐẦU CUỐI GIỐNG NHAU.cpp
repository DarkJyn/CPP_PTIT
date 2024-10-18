#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 998244353
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
		string s;
		cin >> s;
		ll cnt = 0;
		for(int i = 0;i < s.size();++i){
			for(int j = i;j < s.size();++j){
				if(s[i] == s[j]) cnt++;
			}
		}
		cout << cnt << endl;
	}
}