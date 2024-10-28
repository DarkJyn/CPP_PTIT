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
		int x;
        int d = 0;
        int check = 1;
		cin >> x;
		for(int i = 1; i <= x; i++){
			if(__gcd(i,x)==1) d++;
		}
		for(int i = 2;i <= sqrt(d);i++){
			if(d % i == 0){
				check=0;
				break;
			}
		}
		if(check == 0 || d == 0 || d == 1) cout << "0\n";
		else cout << "1\n";
	}
}