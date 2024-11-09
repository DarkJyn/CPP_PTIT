#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct Clock{
	int h,m,s;
};
bool cmp(Clock a,Clock b){
	if(a.h == b.h){
		if(a.m == b.m) return a.s < b.s;
		return a.m < b.m;
	}
	return a.h < b.h;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int n;
	cin >> n;
	struct Clock a[n];
	for(int i = 0;i < n;i++) cin >> a[i].h >> a[i].m >> a[i].s;
	sort(a,a + n,cmp);
	for(int i = 0;i < n;i++) cout << a[i].h << " " << a[i].m <<" " << a[i].s<<"\n";
}