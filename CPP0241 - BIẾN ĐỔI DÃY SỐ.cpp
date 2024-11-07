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
		int l=0;
        int r=n-1;
        int s=0;
		while(l <= r){
			if(a[l] == a[r]){
				l++;
				r--;
			}
			else if(a[l] < a[r]){
				a[l+1] += a[l];
				l++;
				s++;
			}
			else{
				a[r-1] += a[r];
				r--;
				s++;
			}
		}
		cout << s <<"\n";
	}
}