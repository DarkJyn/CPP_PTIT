#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	int n;
	cin >> n;
	cin.ignore();
	map<string,int> mp;
	while(n--){
		string s;
		getline(cin,s);
		mp[s]++;
	}
	cout << mp.size();
}