#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

long long chiadu(string a,long long b){
	ll du=0;
    for(int i = 0;i < a.length();i++)
        du = (du * 10 + (a[i]- 48))%b;
    return du;
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
		string a;
		ll b;
		cin >> a >> b;
		cout << chiadu(a,b) << endl;
	}	
}