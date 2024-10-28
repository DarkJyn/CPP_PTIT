#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

ll ucln(ll a,ll b){
    while(b != 0){
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int prime[100006];
void era(){
    prime[0] = 1;
    prime[1] = 1;
    for(int i = 2;i * i <= 100000;++i){
        if(prime[i] == 0){
            for(int j = i * i;j <= 100000;j+=i){
                prime[j] = 1;
            }
        }
    }
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    era();
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >>l >> r;
        int cnt = 0;
        for(int i = l; i<=r ;++i){
            if(prime[i] == 0) cnt++;
        }
        cout << cnt <<"\n";
    }
}