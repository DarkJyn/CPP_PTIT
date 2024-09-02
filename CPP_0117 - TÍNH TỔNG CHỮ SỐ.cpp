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
        int sum = 0;
        while(1){
            if(sum > 0 && sum < 10){
                cout << sum<<"\n";
                break;
            }
            sum = 0;
            while(n > 0){
                sum += (n % 10);
                n /= 10;
            }
            n = sum;
        }
    }
}