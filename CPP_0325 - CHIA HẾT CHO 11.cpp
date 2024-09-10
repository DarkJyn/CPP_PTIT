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
		ll lens = s.size();
		ll res = 0;
		for(int i = lens - 1;i >= 0;--i){
			int du = s[i] - '0';
			res = ((res*10)%11 + du)%11;
		}
		if(res == 0) cout <<"1";
		else cout <<"0";
		cout <<"\n";
	}
}