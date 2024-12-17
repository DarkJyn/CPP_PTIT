#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct point{
	int x;
	int idx;
};
bool cmp(point A,point B){
	if(A.x == B.x){
		return A.idx < B.idx;
	}
	return A.x < B.x;
}
signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		point a[n];
		for(int i = 0;i < n;++i){
			cin >> a[i].x;
			a[i].idx = i;
		}
		sort(a,a + n,cmp);
		int check[n] = {};
		int res = 0;
		for(int i = 0;i < n;++i){
			if(check[i] || a[i].idx == i) continue;
			int tmp = 0;
			int j = i;
			while(!check[j]){
				check[j] = 1;
				j = a[j].idx;
				tmp++;
			}
			if(tmp > 0) res += tmp - 1;
		}
		cout << res <<"\n";
	}
}