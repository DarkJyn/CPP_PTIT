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
        int b[n];
        int ok = 1;
		for(int i = 0;i < n;i++){
			if(a[i] >= 'A' && a[i] <= 'Z') a[i]+=32;
			if(a[i] >= 'a' && a[i] <= 'c') b[i]=2;
			else if(a[i] >= 'd' && a[i] <= 'f') b[i] = 3;
			else if(a[i] >= 'g' && a[i] <= 'i') b[i] = 4;
			else if(a[i] >= 'j' && a[i] <= 'l') b[i] = 5;
			else if(a[i] >= 'm' && a[i] <= 'o') b[i] = 6;
			else if(a[i] >= 'p' && a[i] <= 's') b[i] = 7;
			else if(a[i] >= 't' && a[i] <= 'v') b[i] = 8;
			else if(a[i] >= 'w' && a[i] <= 'z') b[i] = 9;
		}
		for(int i = 0;i <= (n-1)/2;i++){
			if(b[i] != b[n-i-1]){
				ok = 0;
				break;
			}
		}
		if(ok == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}