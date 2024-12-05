#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int tmp = 1e9;
		for(int i = 0;i < n;i++){
			cin >> a[i];
			tmp = min(a[i],tmp);
		}
		int s = a[0] - tmp;
		int ss = 0;
		for(int i = 1;i < n;i++) s = __gcd(s,a[i]-tmp);
		for(int i = 1;i <= sqrt(s);i++){
			if(s % i == 0){
				if(i != s / i) ss += 2;
				else ss++;
			}
		}
		cout << ss << "\n";
	}
}