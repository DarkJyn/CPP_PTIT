#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n][m];
		for(int i = 0;i < n;++i){
			for(int j= 0;j < m;++j){
				cin >> a[i][j];
			}
		}		
		for(int i = 1;i < n;++i){
			for(int j = 0;j < m;++j){
				if(a[i][j] == 1) a[i][j] = a[i][j] + a[i-1][j];
			}
		}
		int s = 0;
		for(int i = 0;i < n;++i){
			int left[m+3];
			int right[m+3];
			stack<int> st;
			for(int j = 0;j < m;++j){
				while(!st.empty() && a[i][j] <= a[i][st.top()]){
					st.pop();
				}
				if(st.empty()){
					left[j] = 0;
				}
				else{
					left[j] = st.top() + 1;
				}
				st.push(j);
			}
			stack<int> dg;
			for(int j = m - 1;j >= 0;j--){
				while(!dg.empty() && a[i][j] <= a[i][dg.top()]){
					dg.pop();
				}
				if(dg.empty()){
					right[j] = m - 1;
				}
				else{
					right[j] = dg.top() - 1;
				}
				dg.push(j);
			}
			for(int ii = 0;ii < m;++ii){
				// cerr << left[ii] <<" "<< right[ii]<<"\n";
				s = max(s,a[i][ii] * (right[ii] - left[ii] + 1));
			}
		}
		cout << s<<"\n";
	}
}