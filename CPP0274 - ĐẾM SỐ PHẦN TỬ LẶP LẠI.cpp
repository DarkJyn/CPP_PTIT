#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

int main(){
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
		int a[n + 2];
		map<int,int> mp;
		for(int i = 0;i < n;++i){
			cin >> a[i];
			mp[a[i]]++;
		}
		int cnt = 0;
		for(int i = 0;i < n;++i){
			if(mp[a[i]] >= 2){
				cnt += mp[a[i]];
				mp[a[i]] = 0;
			}
		}
		cout << cnt <<"\n";
	}
}