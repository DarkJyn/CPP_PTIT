#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

class PhanSo{
	public:
		ll tu;
		ll mau;
		PhanSo(ll x,ll y){
			tu = x;
			mau = y;
		}
		friend istream& operator >> (istream& nhap , PhanSo &a){
        	nhap >> a.tu >> a.mau;
        	return nhap;
		}

		void rutgon(){
			ll tmp = __gcd(tu,mau);
			tu = tu / tmp;
			mau = mau / tmp;
		}

		friend ostream& operator << (ostream& xuat ,PhanSo a){
			xuat << a.tu <<"/" << a.mau;
			return xuat;
		}
};


ll main(){
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}