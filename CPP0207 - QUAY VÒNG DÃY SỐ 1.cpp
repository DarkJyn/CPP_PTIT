#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	int t;
	cin >> t;
	while(t--){
		int n,d;
		cin >> n>>d;
		queue <int > q;
		for(int i = 0;i < n;++i){
			int x;cin >> x;
			q.push(x);
		}
		for(int i = 0;i < d;++i){
			int top = q.front();
			q.pop();
			q.push(top);
		}
		while(q.size()){
			cout << q.front()<<" ";
			q.pop();
		}
		cout <<"\n";
	}
}