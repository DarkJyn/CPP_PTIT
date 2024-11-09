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
	int n,k,b;
	cin >> n >> k >> b;
	vector <int> a(n+1,1);
	int x;
	for(int i = 0;i < b;i++){
		cin >> x;
		a[x] = 0;
	}
	int s = 1e9,ss = 0;
	for(int i = 1;i <= k;i++) ss += a[i];
	s = min(s,k - ss);
	for(int i = k + 1;i <= n;i++){
		ss = ss + a[i] - a[i-k];
		s = min(s,k - ss);
	}
	cout << s;	
}