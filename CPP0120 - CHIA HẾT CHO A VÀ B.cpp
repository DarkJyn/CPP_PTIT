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
	cin>>t;
	while(t--){
		int m,n,a,b;
		int cnt=0;
		cin >> m >> n >> a >> b;
		for(int i = m;i <= n; i++){
			if(i % a == 0||i % b == 0) cnt++;
		}
		cout<<cnt<<endl;
	}
}