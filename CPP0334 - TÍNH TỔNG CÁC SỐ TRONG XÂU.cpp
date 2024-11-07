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
        int s = 0;
        int ss = 0;
		for(int i = 0;i < n; i++){
			if(a[i] < '0' || a[i] > '9'){
				s += ss;
				ss = 0;
			}
			else ss = ss*10 + (a[i]-'0');
		}
		s += ss;
		cout<<s<<endl;
	}
}