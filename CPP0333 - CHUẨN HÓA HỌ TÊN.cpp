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
		if(s[i] == ' ' && x.size() >= 1){
			v.push_back(x);
			x = "";
		}
		else{
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
			x += s[i];
		}
	}
	for(int i = 0;i < v.size();++i){
		if(i == v.size() - 1){
			for(int j = 0;j < v[i].size();++j){
				v[i][j] -= 32;
				cout << v[i][j];
			}
		}
		else{
			v[i][0] -= 32;
			cout << v[i];
			if(i == v.size() - 2) cout << ", ";
			else cout <<" ";
		}
	}
}