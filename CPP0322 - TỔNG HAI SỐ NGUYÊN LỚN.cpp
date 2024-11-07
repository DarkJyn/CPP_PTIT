#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

string tong_xau(string a, string b) {
    ll carry = 0, sum;
    string ans;
    for(int i = 0; i < max(a.size(), b.size()); i++) {
        if(a.size() == b.size()) break; 
        else if(a.size() < b.size()) {
            a = '0' + a;
        }
        else {
            b = '0' + b;
        }
    }
    ans = a;
    for(int i = a.size() - 1; i >= 0; i--) {
        sum = a[i] - '0' + b[i] - '0' + carry; 
        carry = sum / 10;
        ans[i] = (sum % 10) + '0';
    }
    if(carry == 1) ans = '1' + ans;
    return ans;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
	cin >> t;
	while(t--){
		string a,b;
		cin >> a >> b;
		cout << tong_xau(a,b) << endl;
	}
}