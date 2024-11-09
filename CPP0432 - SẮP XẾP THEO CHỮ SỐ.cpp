#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

bool cmp(string a,string b){
	int i = 0,j = 0;
	int k = 0;
	while(a[i] == b[j]){
		i++;
		j++;
		k++;
		if(i == a.size()) i = 0;
		if(j == b.size()) j = 0;
		if(k == a.size() + b.size()) break;
	}
	return a[i] > b[j];
}

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
		vector <string> a(n);
		for(int i = 0;i < n;i++) cin >> a[i];
		sort(a.begin(),a.end(),cmp);
		for(int i = 0;i < n;i++) cout << a[i];
		cout << "\n";
	}	
}