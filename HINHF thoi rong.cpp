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
	for(int i = 0;i < n;++i){
		for(int j = 0;j < 2 * n;++j){
			if(i == 0){
				if(j == n - 1) cout << "*";
				else cout <<" ";
			}
			else{
				if(j == n - i - 1 || j == n + i - 1){
					cout << "*";
				}
				else cout<< " ";
			}
		}
		cout <<"\n";
	}
	for(int i = 1;i < n;++i){
		for(int j = 0;j < 2 * n;++j){
			if(i == n - 1){
				if(j == n - 1) cout << "*";
				else cout <<" ";
			}
			else{
				if(j == i || j == 2*n - i - 2){
					cout << "*";
				}
				else cout<< " ";
			}
		}
		cout <<"\n";
	}
}