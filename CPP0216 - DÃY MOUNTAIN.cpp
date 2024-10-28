#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    // era();
    int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int l,r;
        int k = -1;
		cin >> l >> r;
		for(int i = l; i < r; i++){
			if(a[i] > a[i+1]){
				k = i;
				break;
			}
		}
		if(k != -1){
			for(int i = k;i < r; i++){
				if(a[i] < a[i+1]){
					k = -2;
					break;
				}
			}
		}
		if(k == -2) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
}