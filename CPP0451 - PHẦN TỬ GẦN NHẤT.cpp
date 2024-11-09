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
		vector <int> a(n);
		int k,x;
		for(int i = 0;i < n;i++) cin >> a[i];
		cin >> k >> x;
		int m = lower_bound(a.begin(),a.end(),x)-a.begin();
		int l,r;
		if(a[m] == x){
			r = m + 1;
			l = m - 1;
		}
		else{
			r = m;
			l = m - 1;
		}
		for(int i = k/2 - 1;i >= 0;i--){
			cout << a[l-i] << " ";
		}
		for(int i=0;i < k/2;i++){
			cout << a[r + i]<<" ";
		}
		cout << endl;
	}
	
}