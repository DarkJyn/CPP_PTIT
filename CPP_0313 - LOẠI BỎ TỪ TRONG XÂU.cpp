#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    string s;
    getline(cin,s);
    string a;
    cin >> a;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        if(tmp != a)
        {
            cout << tmp <<" ";
        }
    }
}