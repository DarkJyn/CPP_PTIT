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
    int t;
	cin >> t;
	while(t--){
		int n,x;
        int s=0;
		cin >> n;
		vector <int> b;
		for(int i = 0;i < n;i++){
			set <int> c;
			for(int j = 0;j < n;j++){
				cin >> x;
				c.insert(x);
			} 
			for(int ii : c) b.push_back(ii); 
		}
		sort(b.begin(),b.end());
		for(int i = 0;i < b.size();i++){ 
			int ii = 1;
			while(b[i] == b[i+1]){ 
				ii++; 
				i++; 
			} 
			if(ii == n) s++; 
		} 
		cout << s <<endl; 
	}    
}
