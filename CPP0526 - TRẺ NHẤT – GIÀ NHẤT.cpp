#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct Human{
	string ten;
	int ng,th,na;
};
bool cmp(Human a,Human b){
	if(a.na==b.na){
		if(a.th==b.th) return a.ng>b.ng;
		return a.th>b.th;
	}
	return a.na>b.na;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int n;
	cin >> n;
	struct Human a[n];
	for(int i=0;i<n;i++){
		cin >> a[i].ten;
		string x;
		cin >> x;
		a[i].ng = (x[0] - '0') * 10 + (x[1] - '0');
		a[i].th = (x[3] - '0') * 10 + (x[4] - '0');
		a[i].na = (x[6] - '0') * 1000 + (x[7] - '0') * 100 + (x[8] - '0') * 10 + (x[9] - '0');
	}
	sort(a,a + n,cmp);
	cout << a[0].ten << endl << a[n-1].ten;
}