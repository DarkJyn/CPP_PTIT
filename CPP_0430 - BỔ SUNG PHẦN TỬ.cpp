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
        int n;
		cin >> n;
		int a[n + 2];
		int min = 10000;
		int max = -1;
		map<int,int> mp;
		for(int i = 0;i < n;++i){
			cin >> a[i];
			if(a[i] > max){
				max = a[i];
			}
			if(a[i] < min){
				min = a[i];
			}
			mp[a[i]]++;
		}
		int cnt = 0;
		for(int i = min;i <= max;++i){
			if(mp[i] == 0){
				cnt++;
			}
		}
		cout << cnt << endl;
    }
}