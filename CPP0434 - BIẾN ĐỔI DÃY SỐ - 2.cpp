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
		int n;
		cin >> n;
		int a[n];
		for(int i = 0;i < n;i++) cin >> a[i];
		cout << a[0] * a[1] << " ";
		for(int i = 1;i < n - 1;i++) cout << a[i-1] * a[i+1]<<" ";
		cout << a[n-1] * a[n-2] << "\n";
	}	
}