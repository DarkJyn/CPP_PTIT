#include <bits/stdc++.h>

using namespace std;

using ll = unsigned long long;

#define MOD 1000000007
#define vi vector;

char resA[] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
char resB[] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

bool check(int n){
    int cntc = 0;
    int cntl = 0;
    while(n > 0){
        if(n%2 == 0){
            cntc++;
        }
        else cntl++;
        n /= 10;
    }
    return cntc == cntl;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    int n;
    cin >> n;
    int end = pow(10,n);
    int beg = pow(10,n-1);
    int cnt = 0;
    for(int i = beg;i< end;++i){
        if(check(i)){
            cout << i<<" ";
            cnt++;
        }
        if(cnt == 10){
            cout << "\n";
            cnt = 0;
        }
    }
}