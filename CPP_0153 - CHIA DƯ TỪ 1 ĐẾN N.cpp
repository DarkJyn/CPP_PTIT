#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	ll t;
	cin >> t;
	while(t--){
		ll n,k;
		cin >> n >> k;
		if(n < k){
			cout << (n+1)*n/2<<"\n";
		}
		else if(n == k){
			cout << ((n + 1)*n/2) - n<<"\n";
		}
		else{
			ll nguyen = n /k;
			ll le  = n % k;
			ll sumlast = 0;
			sumlast += nguyen*k*(k-1)/2;
			sumlast += (le+1)*le/2;
			cout << sumlast <<"\n";
		}

	}

}