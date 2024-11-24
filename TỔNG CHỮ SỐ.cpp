#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int tong(int n){
	int s = 0;
	while(n > 0){
		s += n % 10;
		n /= 10;
	}
	return s;
}
int cnt(int n){
	if(n < 10) return 0;
	return 1 + cnt(tong(n));
}

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);	
	string s;
	cin >> s;
	int m = 0;
	for(int i= 0;i < s.size();++i){
		m += (s[i] - '0');
	}
	int res = 0;
	if(s.length() > 1) res++;
	res += cnt(m);
	cout << res;
}