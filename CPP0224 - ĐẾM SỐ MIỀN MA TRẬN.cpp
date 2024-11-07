#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int a[100][100],n,m;
void Do(int i,int j){
	if(i == -1|| i == n || j == -1 || j == m) return;
	if(a[i][j] == 0) return;
	a[i][j] = 0;
	Do(i+1,j);
	Do(i-1,j);
	Do(i,j+1);
	Do(i,j-1);
	Do(i-1,j-1);
	Do(i-1,j+1);
	Do(i+1,j+1);
	Do(i+1,j-1);
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
		int s = 0;
		cin >> n >> m;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++) cin >> a[i][j];
		}
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				if(a[i][j] == 1){
					s++;
					Do(i,j);
				}
			}
		}
		cout << s << endl;
	}   
}