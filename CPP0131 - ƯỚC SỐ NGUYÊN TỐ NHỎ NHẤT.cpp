#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int prime[10006];
void era(){
    prime[0] = 1;
    prime[1] = 1;
    for(int i = 2;i * i <= 10000;++i){
        if(prime[i] == 0){
            for(int j = i * i;j <= 10000;j+=i){
                if(prime[j] == 0) prime[j] = i;
            }
        }
    }
    for(int i = 1; i <= 10000;++i){
        if(prime[i] == 0) prime[i] = i;
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
        int n;
        cin >> n;
        for(int i = 1;i <= n; i++) cout << prime[i]<<" ";
		cout<<endl;
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
