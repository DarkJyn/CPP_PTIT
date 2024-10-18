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
		int n;
		cin>>n;
		int a[]={5,20,38,50,38,20,8,5,0};
		cout<<a[n-1]<<endl;
	}
}