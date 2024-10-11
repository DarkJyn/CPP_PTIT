#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int n;
void solve(int n){
    queue<string> q;
    q.push("0");
    q.push("1");
    while(!q.empty()){
        string cur = q.front();
        q.pop();
        if(cur.size() == n){
            cout << cur << " ";
            continue;
        }
        q.push(cur + "0");
        q.push(cur + "1");
    }
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        solve(n);
        cout <<"\n";
    }
}