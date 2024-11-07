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
		int s = 0;
		for(int i = 0;i < a.size();i++) s += a[i]-'0';
		while(s > 9){
			int k = s;
            int ss=0;
			while(k != 0){
				ss += k % 10;
				k /= 10;
			}
			s = ss;
		}
		if(s == 9) cout << 1 << endl;
		else cout << 0 << endl;
	}
}