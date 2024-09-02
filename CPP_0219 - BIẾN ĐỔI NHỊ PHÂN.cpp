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
		int n,m;
		cin >> n >> m;
		int a[n+2][m+2];
		for(int i = 0;i < n;++i)
			for(int j = 0;j < m;++j){
				cin >> a[i][j];
			}
		int markrow[n+2] = {0};
		int markcol[m+2] = {0};
		for(int i = 0;i < n;++i){
			for(int j = 0;j < m;++j){
				if(a[i][j]==1){
					markcol[j] = 1;
					markrow[i] = 1;
				}
			}
		}
		for(int i = 0;i < n;++i){
			for(int j = 0;j < m;++j){
				if(markrow[i] == 0 && markcol[j] == 0){
					cout<<"0 ";
				}
				else cout <<"1 ";
			}
			cout <<"\n";
		}
	}
}