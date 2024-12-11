#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	freopen("DATA.in","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	int x;
	map<int,int> mp;
	while(cin >> x){
		mp[x]++;
	}
	for(auto x : mp){
		cout << x.first <<" "<< x.second <<"\n";
	}
}