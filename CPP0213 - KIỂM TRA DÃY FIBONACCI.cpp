#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int fibo(int n){
	if(n<4) return 1;
	int a=1,b=1;
	while(a<n){
		int k=a+b;
		b=a;
		a=k;
	}
	if(a==n) return 1;
	else return 0;
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    // era();
    int t;
	cin >> t;
	while(t--){
		int n;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;++i){
            cin >> a[i];
            if(fibo(a[i])) cout << a[i] <<" ";
        }
        cout << "\n";
	}
}