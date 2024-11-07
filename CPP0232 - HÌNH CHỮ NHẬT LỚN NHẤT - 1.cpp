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
		int n,m;
		cin>>n>>m;
        int s = 0;
		vector <vector <int> > a(n,vector <int> (m));
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++) cin >> a[i][j];
		}
		for(int i = 0;i < m;i++){
			for(int j = 1;j < n;j++){
				if(a[j][i] == 1) a[j][i] = a[j-1][i]+1;
			}
		}
		for(int i = 0;i < n;i++){
			sort(a[i].begin(),a[i].end());
			stack <int> b,c;
			int l[m],r[m];
			for(int j = 0;j < m;j++){
				while(!b.empty() && a[i][j] <= a[i][b.top()]) b.pop();
				if(b.empty()) l[j] = 0;
				else l[j] = b.top()+1;
				b.push(j);
			}
			for(int j = m-1;j >= 0;j--){
				while(!c.empty() && a[i][j] <= a[i][c.top()]) c.pop();
				if(c.empty()) r[j] = m-1;
				else r[j] = c.top()-1;
				c.push(j);
			}
			for(int j = 0;j < m ;j++) s = max(s,(r[j]-l[j]+1)*a[i][j]);
		}
		cout << s << "\n";
	}
}
/* Dean
                  __------__
                /~          ~\
               |    //^\//^\|         Oh..My great god ...     
             /~~\  ||  o| |o|:~\       Please give me many many
            | |6   ||___|_|_||:|    /  bananas .. 
             \__.  /      o  \/'       
              |   (       O   )        
     /~~~~\    `\  \         /
    | |~~\ |     )  ~------~`\
   /' |  | |   /     ____ /~~~)\
  (_/'   | | |     /'    |    ( |
         | | |     \    /   __)/ \
         \  \ \      \/    /' \   `\
           \  \|\        /   | |\___|
             \ |  \____/     | |
             /^~>  \        _/ <
            |  |         \       \
            |  | \        \        \
            -^-\  \       |        )
                 `\_______/^\______/-Dean
*/
