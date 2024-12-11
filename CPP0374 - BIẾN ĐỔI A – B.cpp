#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	string s;
	cin >> s;
	vector<string> v;
	int idx = 0;
	int ii = 0;
	while(idx < s.size()){
		while(s[ii] == s[ii+1]){
			ii++;
			if(ii == s.size()) break;
		}
		v.push_back(s.substr(idx,ii + 1 - idx));
		idx = ++ii;
	}
	int cnt = 0;
	int result = 0;
	for(int i = v.size() - 1;i >= 0;--i){
		if((v[i][0] == 'A' && cnt % 2 == 0) 
		|| (v[i][0] == 'B' && cnt % 2 == 1)){
			continue;
		}
		if(v[i].size() == 1){
			result++;
		}
		else{
			cnt++;
			result++;
		}
	}
	cout << result;
}