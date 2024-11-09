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
		int n,k;
		cin >> n >> k;
		int sizeofwindown = 0;
		int a[n];
		for(int i = 0;i < n;i++){
			cin >> a[i];
			if(a[i] <= k) sizeofwindown++;
		}
		int tmp = 0;
		for(int i = 0;i < sizeofwindown;i++) if(a[i]>k) tmp++;
		int res = tmp;
		for(int i = 0,j = sizeofwindown;j<n;i++,j++){
			if(a[i] > k) tmp--;
			if(a[j] > k) tmp++;
			res = min(res,tmp);
		}
		cout << res << endl;
	}	
}