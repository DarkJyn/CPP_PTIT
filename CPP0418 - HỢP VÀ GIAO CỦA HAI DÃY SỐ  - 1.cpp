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
		int n,m;
		cin >> n >> m;
		map <int,int> mp;
		vector <int> c,d;
		int x;
		for(int i=0;i<n;i++){
			cin>>x;
			mp[x]++;
			if(mp[x]==1) c.push_back(x);
		}
		for(int i=0;i<m;i++){
			cin >> x;
			if(mp[x] == 0) c.push_back(x);
			if(mp[x] > 0) d.push_back(x);
		}
		sort(c.begin(),c.end());
		sort(d.begin(),d.end());
		for(int i = 0;i < c.size();i++) cout << c[i] << " ";
		cout << endl;
		for(int i = 0;i < d.size();i++) cout << d[i] << " ";
		cout << endl;
	}	
}