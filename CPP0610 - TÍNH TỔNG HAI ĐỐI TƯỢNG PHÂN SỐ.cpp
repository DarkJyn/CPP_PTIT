#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

class PhanSo{
	public:
	ll tu,mau;
	PhanSo(ll a = 0,ll b=1){
		tu = a;
		mau = b;
	}
	void rutgon(){
		ll k = __gcd(tu,mau);
		tu /= k;
		mau /= k;
	}
	friend istream &operator >> (istream &scanner,PhanSo &a){
		cin >> a.tu >> a.mau;
		return scanner;
	}
	friend ostream &operator<<(ostream &systemOut,PhanSo a){
		cout << a.tu << "/" << a.mau;
		return systemOut ;
	}
	PhanSo operator + (PhanSo b){
		PhanSo a;
		a.tu = tu * b.mau + mau * b.tu;
		a.mau = mau * b.mau;
		a.rutgon();
		return a;
	}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}