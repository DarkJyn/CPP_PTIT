#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007

signed main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int n;
	cin >> n;
	int a[n + 2];
	for(int i = 0;i < n;++i){
		cin >> a[i];
	}
	sort(a,a +n);
	map <int,int> visited;
	for(int i = 0;i < n;++i){
		if(visited[a[i]] == 0){
			cout << a[i] <<" ";
			visited[a[i]] = 1;
		}
	}
}