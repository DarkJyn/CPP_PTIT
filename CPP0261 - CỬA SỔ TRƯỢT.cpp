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
	int a[n+1][n+1];
	for(int i =1 ;i <= n; i++){
		for(int j = 1;j <= n; j++){
			cin >> a[i][j];
		}
	}
	int m;
	cin >> m;
	int b[m+1][m+1];
	for(int i =1 ;i <= m;i++){
		for(int j = 1;j <= m;j++){
			cin >> b[i][j];
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			int c = i % m;
            int d = j%  m;
			if(c == 0) c = m;
			if(d == 0) d = m;
			a[i][j] *= b[c][d];
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j=1;j <= n;j++){
			cout << a[i][j] <<" ";
		}
		cout<<endl;
	}
    
}
	