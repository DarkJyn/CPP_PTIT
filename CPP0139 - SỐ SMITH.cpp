#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int prime[100005];
vector<int> v;
void sangnt(){
	prime[0] = 1;
	prime[1] = 1;
	for(int i = 2;i * i <= 100005;++i){
		if(prime[i] == 0){
			for(int j = i * i;j <= 100005; j += i){
				prime[j] = i;
			}
		}
	}
	for(int i = 2;i <= 100005;++i){
		if(prime[i] == 0){
			prime[i] = i;
		}
	}
}
int sofn(int n){
	int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}
bool check(int n) {
    if (n < 2) return false;
    int s1 = sofn(n);
	int s2 = 0;
    while(n > 1){
        s2 += sofn(prime[n]);
        n /= prime[n];
    }
    // cout << s1 << " " << s2 << "\n";
    if (s1 == s2) return true;
    return false;
}
signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	sangnt();
	while(t--){
		int n;
		cin >> n;
		if(prime[n] != n && check(n)){
			cout <<"YES";
		}
		else cout <<"NO";
		cout <<"\n";
	}
}