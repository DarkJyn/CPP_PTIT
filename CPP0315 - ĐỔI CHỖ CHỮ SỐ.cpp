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
		string a;
		cin >> a;
		int n = a.size();
        int ok = 0;
		for(int i = n-2;i >= 0;i--){
			if(a[i] > a[i+1]){
				ok = 1;
				int s = 0;
                int k;
				for(int j = i+1;j < n;j++){
					if(a[j] < a[i]){
						if(a[j] > s){
							s = a[j];
							k = j;
						}
					}
				}
				swap(a[i],a[k]);
				break;
			}
		}
		if(ok == 0) cout << -1 << endl;
		else cout << a << endl;
	}
}