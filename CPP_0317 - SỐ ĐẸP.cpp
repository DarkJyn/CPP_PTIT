#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int check(string s){
	string tmp = s;
	reverse(tmp.begin(),tmp.end());
	if(s != tmp) return 0;
	for(int i = 0;i < s.size();++i){
		if(s[i] % 2 != 0) return 0;
	}
	return 1;
}

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("TASK.inp","r",stdin);
	freopen("TASK.out","w",stdout);
	#endif
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		if(check(s)) cout << "YES" <<endl;
		else cout << "NO" << endl;
	}
}