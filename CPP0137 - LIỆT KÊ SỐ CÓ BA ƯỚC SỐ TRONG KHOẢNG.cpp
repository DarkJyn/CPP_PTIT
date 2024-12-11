#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int prime[1000005];
void era(){
	prime[0] = 1;
	prime[1] = 1;
	for(int i = 2;i * i <= 1000005;++i){
		if(prime[i] == 0){
			for(int j = i * i;j <= 1000005;j+=i){
				prime[j] = 1;
			}
		}
	}
}
signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	era();
	while(t--){
		ll l,r;
		cin >> l >> r;
		ll cnt = 0;
		for(int i = sqrt(l);i <= sqrt(r);++i){
			if(prime[i] == 0){
				cnt++;
			}
		}
		cout << cnt<<"\n";
	}
}