#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif	
	ll t;
	cin >> t;
	while(t--){
		int n;
		cin >> n ;
		int a[n+2][n+2];
		for(int i = 0;i < n;++i)
			for(int j = 0;j < n;++j){
				cin >> a[i][j];
			}
		int idx = 0;
		int i = 0;
		while (i < n){
			if(i % 2 == 0) cout << a[i][idx++]<<" ";
			else cout << a[i][idx--]<<" ";
			if(idx == n) {
				i++;
				idx--;
			} 
			if(idx == -1){
				i++;
				idx++;
			}
		}
		cout << "\n";
	}
}