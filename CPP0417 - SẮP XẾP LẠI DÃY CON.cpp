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
		int a[n+1];
        int b[n+1];
        int s = 0;
        int l,r;
        int ma=0,mi=1e9;
		for(int i = 1;i <= n;i++){
			cin >> a[i];
			if(a[i] > s) s = a[i];
			b[i] = s;
		}
		for(int i = 1;i <= n-1 ;i++){
			if(a[i] > a[i+1]){
				l = i;
				break;
			}
		}
		for(int i = n;i >= 2;i--){
			if(a[i] < a[i-1]){
				r = i;
				break;
			}
		}
		for(int i = l;i <= r;i++){
			if(a[i] > ma) ma = a[i];
			if(a[i] < mi) mi = a[i];
		}
		for(int i = 1;i <= n;i++){
			if(a[i] > mi){
				cout << i << " ";
				break;
			}
		}
		for(int i = n;i >= 1;i--){
			if(a[i] <= ma){
				cout << i;
				break;
			}
		}
		cout << endl;
	}    
}
