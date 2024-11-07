#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

ll v5(string a){
	ll x = 0;
	for(int i = 0;i < a.size(); i++){
		if(a[i] == '6') a[i]--;
		x = x * 10 + (a[i] - '0');
	}
	return x;
}
long long v6(string a){
	ll x = 0;
	for(int i = 0;i < a.size();i++){
		if(a[i] == '5') a[i]++;
		x = x * 10 + (a[i]-'0');
	}
	return x;
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
		string a,b;
		cin >> a >> b;
		cout << v5(a) + v5(b) << " " << v6(a) + v6(b) << endl;
	}
}