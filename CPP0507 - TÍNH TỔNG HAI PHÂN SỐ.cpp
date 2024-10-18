#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
struct PhanSo{
	ll tu,mau;
};
void nhap(PhanSo &a){
	cin >> a.tu >> a.mau;
}
ll ucln(ll a,ll b){
	while(b != 0){
		ll tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
ll bcnn(ll a,ll b){
	return b * a/ucln(a,b);
}
PhanSo tong(PhanSo a,PhanSo b){
	PhanSo t;
	t.tu = a.tu * (bcnn(a.mau,b.mau) / a.mau) + b.tu *(bcnn(a.mau,b.mau)/b.mau);
	t.mau = bcnn(a.mau,b.mau);
	return t;
}
void in(PhanSo a){
	cout << a.tu/ucln(a.tu,a.mau) <<"/"<< a.mau/ucln(a.tu,a.mau);
}
ll main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}