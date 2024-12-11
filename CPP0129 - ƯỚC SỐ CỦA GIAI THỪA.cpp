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
		int n, p; 
		cin >> n >> p; 
		int i = 2; 
		while(pow(p, i) <= n){ 
			i++; 
		} 
		int x = 0;
		for(int j = 1; j < i; j++){ 
			int y = pow(p, j); 
			x = x + n / y;
		} 
		cout << x << endl; 
	} 
}