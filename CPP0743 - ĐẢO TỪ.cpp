#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    // cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        stack<string> st;
        getline(cin,s);
        stringstream ss(s);
        string word;
        while(ss >> word){
            st.push(word);
        }
        // st.push(s);
        while(!st.empty()){
            cout << st.top() <<" ";
            st.pop();
        }
        cout <<"\n";
    }
}