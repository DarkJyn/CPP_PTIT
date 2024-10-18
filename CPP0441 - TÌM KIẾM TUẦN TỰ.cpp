#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 998244353
#define endl "\n"

signed main(){
	// cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	int t;
    cin >> t;
    while(t--){
        int n,x;
		cin >> n >> x;
		int a[n + 2];
		for(int i = 0;i < n;++i){
			cin >> a[i];
		}
		int check = 0;
		for(int i = 0;i < n;++i){
			if(a[i] == x){
				cout << i + 1;
				check = 1;
				break;
			}
		}
		if(check == 0) cout <<"-1";
		cout << endl;
    }
}