#include<bits/stdc++.h>
using namespace std;
#define faster()    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007
#define fi first
#define se second
typedef long long ll;
const int MAXN = 10005;
void lam(){
    string name, cvu;
    ll luong, cong;
    getline(cin, name);
    cin >> luong >> cong;
    cin.ignore();
    getline(cin, cvu);
    luong  *= cong;
    ll thuong = 0, phuCap = 0, thuNhap = 0;
    if(cong >= 25)  thuong = luong*20/100;
    else if(cong >= 22) thuong = luong*10/100;

    if(cvu == "GD") phuCap =  250000;
    else if(cvu == "PGD")   phuCap = 200000;
    else if(cvu == "TP")    phuCap = 180000;
    else if(cvu == "NV")    phuCap = 150000;

    thuNhap = (luong + thuong + phuCap);
    cout << "NV01 " << name << " " << luong << " " << thuong << " " << phuCap << " " << thuNhap;
}
int main(){
    faster();
    int t = 1;
    while(t--){
        lam();
    }
}