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
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a;
		for(int i = 2;i <= sqrt(n); i++){
			while(n % i == 0){
				a.push_back(i);
				n /= i;
			}
		}
		if(n > 1) a.push_back(n);
		if(a.size() == 3 && a[0] != a[1] && a[1] != a[2] && a[0] != a[2]) cout << 1 << endl;
		else cout << 0 <<endl;
	}
    
}