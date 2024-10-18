#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int cntnum[10] = {};
		for(int i = 0;i < n;++i){
			if(s[i] == '2') cntnum[2]++;
			else if(s[i] == '3') cntnum[3]++;
			else if(s[i] == '4'){
				cntnum[3]++;
				cntnum[2] +=2;
			}
			else if(s[i] == '5'){
				cntnum[5]++;
			}
			else if(s[i] == '6'){
				cntnum[3]++;
				cntnum[5]++;
			}
			else if(s[i] == '7'){
				cntnum[7]++;
			}
			else if(s[i] == '8'){
				cntnum[7]++;
				cntnum[2]+=3;
			}
			else if(s[i] == '9'){
				cntnum[7]++;
				cntnum[2]++;
				cntnum[3] += 2;
			}
		}
		for(int i=7;i>=2;i--){
			for(int j=0;j<cntnum[i];j++) cout<<i;
		}
		cout<<endl;
	}

	
}