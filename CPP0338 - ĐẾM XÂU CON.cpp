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
		int k;
		cin >> a >> k;
		int b[26] = {};
        int n = a.size();
        int ss = 0;
		for(int i = 0;i < n;i++){
			int b[26] = {};
            int l = n;
            int r = n;
            int s = 0;
			for(int j = i;j < n;j++){
				if(b[a[j]-'a'] == 0) s++;
				b[a[j]-'a']++;
				if(s == k){
					l = j;
					break;
				}
			}
			for(int j = l+1;j < n;j++){
				if(b[a[j]-'a'] == 0){
					r = j;
					break;
				}
			}
			if(l <= r) ss += r-l;
		}
		cout << ss << endl;
	}
}