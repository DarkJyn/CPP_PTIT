#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int n;
	cin >> n;
	int b[n*n];
    int a[n][n];
	for(int i = 0;i < n*n;i++) cin >> b[i];
	sort(b,b+n*n);
	int dong = n,cot = n,k=0,p=0;
	while(k<n*n){
		for(int i = p;i<cot;i++) a[p][i] = b[k++];
		for(int i = p+1;i<dong;i++) a[i][cot-1] = b[k++];
		if(p != dong-1) for(int i=cot-2;i>=p;i--) a[dong-1][i] = b[k++];
		if(p != cot-1) for(int i=dong-2;i>p;i--) a[i][p] = b[k++];
		p++;dong--;cot--;
	}
	for(int i=0;i<n;i++){
		for(int j = 0;j < n;j++) cout << a[i][j] << " ";
		cout << "\n";
	}
}