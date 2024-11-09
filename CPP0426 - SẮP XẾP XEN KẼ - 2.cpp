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
		sort(a,a+n);
		int b[n];
		int index = n - 1;
		for(int i = 0;i < n; i += 2) b[i] = a[index--];
		for(int i = 1;i < n;i += 2) b[i] = a[(i-1) / 2];
		for(int i = 0;i < n;i++) cout << b[i] << " ";
		cout << endl;
	}	
}