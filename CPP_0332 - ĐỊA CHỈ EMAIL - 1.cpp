#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 998244353
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	string s;
	getline(cin,s);
	s += ' ';
	vector<string> v;
	string x = "";
	for(int i = 0;i < s.size();++i){
		if(s[i] == ' '){
			v.push_back(x);
			x = "";
		}
		else{
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
			x += s[i];
		}
	}
	cout << v[v.size() - 1];
	for(int i = 0;i < v.size() - 1;++i){
		cout << v[i][0];
	}
	cout <<"@ptit.edu.vn";

}