#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct point{
	int x,ii,xx;
};
bool cmp(point a,point b){
	if(a.xx == b.xx) return a.ii < b.ii;
	else return a.xx < b.xx;
}

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("TASK.inp","r",stdin);
	freopen("TASK.out","w",stdout);
	#endif
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		vector <point> a(n);
		for(int i = 0;i < n;i++){
			cin >> a[i].x;
			a[i].ii = i;
			a[i].xx = abs(a[i].x - k);
		}
		sort(a.begin(),a.end(),cmp);
		for(int i = 0;i < n; i++) cout << a[i].x << " ";
		cout << "\n";
	}	
}