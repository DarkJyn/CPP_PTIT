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
		for(int i = 0;i < n - 1;i++){
			if(a[i+1] != 0 && a[i] == a[i+1]){
				a[i] *= 2;
				a[i+1] = 0;
			}
		}
		int s = 0;
		for(int i = 0;i < n;i++){
			if(a[i] != 0) cout << a[i] << " ";
			else s++;
		}
		for(int i = 0;i < s;i++) cout <<"0 ";
		cout << "\n";
	}	
}