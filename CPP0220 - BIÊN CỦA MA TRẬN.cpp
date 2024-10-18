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
		for(int i = 0;i < n;++i){
			for(int j = 0;j < n;++j){
				if(i == 0 || i == n - 1 || j == 0 || j == n - 1){
					cout << a[i][j];
				}
				else cout <<" ";
				cout <<" ";
			}
			cout << "\n";
		}
	}
}