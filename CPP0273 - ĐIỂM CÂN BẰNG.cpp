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
		int s = 0;
		int ss = 0;
		int check = -1;
		cin >> n;
		int a[n];
		for(int i  =0;i < n;++i){
			cin >> a[i];
			s += a[i];
		}
		for(int i = 0;i < n;++i){
			if(ss * 2 == s - a[i]){
				check = i + 1;
				break;
			}
			ss += a[i];
		}
		cout << check <<"\n";
	}

	
}