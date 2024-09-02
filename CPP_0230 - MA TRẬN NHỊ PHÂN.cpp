#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007

signed main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int n;
	cin >> n;
	int a[n+2][3];
	for(int i = 0;i < n;++i){
		for(int j = 0;j < 3;++j){
			cin >> a[i][j];
		}
	}
	int cnt =0 ;
	for(int i = 0;i < n;++i){
		int tmp = 0;
		for(int j = 0;j < 3;++j){
			if(a[i][j] == 1) tmp++;
		}
		if(tmp > 1) cnt++;
	}
	cout << cnt;
}