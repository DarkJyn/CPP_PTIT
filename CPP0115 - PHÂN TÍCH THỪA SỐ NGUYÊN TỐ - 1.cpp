#include <bits/stdc++.h>

using namespace std;

using ll = unsigned long long;

#define MOD 1000000007
#define vi vector;

int prime[1000006];
void era(){
    prime[0] = 1;
    prime[1] = 1;
    for(int i = 2;i * i <= 1000000;++i){
        if(prime[i] == 0){
            for(int j = i * i;j <= 1000000;j+=i){
                prime[j] = 1;
            }
        }
    }
}

int main(){
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
        for(int i = 2;i * i <= n;++i){
            if(n % i == 0){
                int cnt = 0;
                while(n % i == 0){
                    cnt++;
                    n /= i;
                }
                cout << i <<" "<<cnt<<" ";
                cnt = 0;
            }
        }
        if(n > 1) cout << n <<" 1";
        cout <<"\n";
    }
}