#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 998244353
#define endl "\n"

ll ucln(ll a,ll b){
    while(b != 0){
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
struct PhanSo{
    ll tu;
    ll mau;
};
void nhap(PhanSo &A){
    cin >> A.tu;
    cin >> A.mau;
}
void in(PhanSo A){
    cout << A.tu <<"/" <<A.mau;
}

void rutgon(PhanSo &p){
    ll tmp = ucln(p.tu,p.mau);
    p.tu /= tmp;
    p.mau /= tmp;
}
ll main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}