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
	string s;
	cin >> s;
	int n = s.size();
	for(int i = 0;i < n;++i){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	}
	for(int i = 0;i < n;++i){
		if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
			cout <<"."<<s[i];
		}
	}
}