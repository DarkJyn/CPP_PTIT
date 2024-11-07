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
        int b[26]={};
        int s = 0;
		for(int i = 0;i < n;i++){
			b[a[i] - 'a']++;
			s = max(s,b[a[i]-'a']);
		}
		if(s <= (a.size()+1) /2) cout << 1 << endl;
		else cout << 0 << endl;
	}
}