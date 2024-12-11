#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	freopen("DATA.in","r",stdin);
	int n,m,x;
	cin >> n >> m;
	map<int,int> mark1, mark2;
	for(int i = 0;i < n;++i){
		cin >> x;
		mark1[x]++;
	}
	for(int i = 0;i < m;++i){
		cin >> x;
		mark2[x]++;
	}
	for(auto x : mark1){
		if(mark2[x.first] > 0){
			cout << x.first <<" ";
		}
	}
}