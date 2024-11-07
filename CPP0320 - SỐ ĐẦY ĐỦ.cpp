#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int check(string a){
	if(a[0] == '0') return -1;
	int b[10] = {};
	for(int i = 0;i < a.size();i++){
		if(a[i] > '9' || a[i] < '0') return -1;
		else b[a[i]-'0']++;
	}
	for(int i = 0;i < 10;i++){
		if(b[i] == 0) return 0;
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
		if(check(a) == -1) cout << "INVALID" << endl;
		else if(check(a) == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}   
}