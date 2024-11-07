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
    	int n;
    	cin >> n;
    	int a[n][n],b[n]={},c[n]={};
        int s = 0;
        int ss = 0;
    	for(int i = 0;i < n;i++){
    		for(int j = 0;j < n;j++){
    			cin >> a[i][j];
    			b[i] += a[i][j];
    			c[j] += a[i][j];
			}
		}
		for(int i = 0; i < n ;i++){
			s = max(s,max(b[i],c[i]));
		}
	    for(int i = 0,j =0 ;i < n &&j < n;){
	        int k = min(s-b[i],s-c[j]);
	        a[i][j] += k;
	        b[i] += k;
	        c[j] += k;
	        ss += k;
	        if(b[i] == s) i++;
	        if(c[j] == s) j++;
	    }
	    cout << ss << "\n";
	}
}