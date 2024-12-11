#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	unordered_map<int,int> mp;
	int x;
	vector<int> key;
	while(cin >> x){
		if(mp[x] == 0){
			key.push_back(x);
		}
		mp[x]++;
	}
	for(auto x : key){
		cout << x <<" "<<mp[x]<<"\n";
	}
}