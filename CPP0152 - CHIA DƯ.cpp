#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	int t;
	cin >> t;
	while(t--){
		int a,m;
		cin >> a >> m;
		int check = 1;
		for(int i = 0;i <= m - 1;++i){
			if((a*i) % m == 1){
				cout << i <<"\n";
				check = 0;
				break;
			}
		}
		if(check == 1) cout <<"-1\n";
	}

}