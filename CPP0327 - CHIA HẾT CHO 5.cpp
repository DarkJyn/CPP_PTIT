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
		if(s[lens - 1] == '1') res++;
		for(int i = lens - 2;i >= 0;--i){
			if(s[i] == '1'){
				if((lens - i - 1) % 4 == 1) res += 2;
				else if((lens - i - 1) % 4 == 2) res += 4;
				else if((lens - i - 1) % 4 == 3) res+= 8;
				else if((lens - i - 1) % 4 == 0) res += 6;
			}
		}
		if(res % 5 == 0) cout <<"Yes";
		else cout <<"No";
		cout <<endl;
	}
}