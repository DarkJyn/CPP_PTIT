#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
vector<int> a(1000005,0);
vector<long long> b;
void era(){
	for(long long i=2;i<=1000001;i++){
		if(a[i]==0){
			for(long long j=i*i;j<=1000001;j+=i) a[j]=1;
			b.push_back(i);
		}
	}
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
	era();
	int t;
	cin >> t;
	while(t--){
		long long n,i=0;
		cin >> n;
		while( b[i] * b[i]<=n){
			i++;
		}
		cout<< i <<endl;
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
