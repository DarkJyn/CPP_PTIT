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
        int maxx=0;
	    cin >> n;
	    int a[n+1],b[n+1];
	    a[0] = b[0] = 0;
	    for(int i = 1;i <=  n;i++){
	    	cin >> a[i];
	    	a[i] += a[i-1];
		}
	    for(int i = 1;i <= n;i++){
	    	cin >> b[i];
	    	b[i] += b[i-1];
		}
	    for(int i = 1;i <= n;i++){
	    	for(int j = i+maxx;j <= n;j++){
	    		if(a[j]-a[i-1] == b[j]-b[i-1]){
	    			if(j-i+1 > maxx) maxx = j-i+1;
				}
			}
		}
	    cout << maxx << "\n";
	}	
}