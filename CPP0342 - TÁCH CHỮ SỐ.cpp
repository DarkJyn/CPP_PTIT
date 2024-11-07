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
		int b[26] = {};
		int s=0;
		for(int i = 0;i < n;i++){
			if(a[i] >= 'A' && a[i] <= 'Z') b[a[i] - 'A']++;
			else s += a[i] - '0';
		}
		for(int i = 0;i < 26;i++){
			while(b[i] > 0){
				cout << (char)(i+'A');
				b[i]--;
			}
		}
		cout << s << endl;
	}	
}