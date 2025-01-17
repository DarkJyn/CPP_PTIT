#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

bool check(string a){
	if(a[5] < a[6] && a[6] < a[7] && a[7] < a[9] && a[9] < a[10]) return 1;
	if(a[5] == a[6] && a[6] == a[7] && a[9] == a[10]) return 1;
	for(int i = 5;i <= 10; i++){
		if(i == 8) continue;
		if(a[i] != '6' && a[i] != '8') return 0;
	}
	return 1;
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
		cin >> a;
		if(check(a)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}   
}