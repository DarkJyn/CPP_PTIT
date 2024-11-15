#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

class NhanVien{
	public:
		string name;
		string gender;
		string birthday;
		string address;
		string taxcode;
		string daywork;
		friend istream& operator >> (istream& nhap , NhanVien &a){
        	getline(nhap,a.name);
			nhap >> a.gender;
			nhap >> a.birthday;
			nhap.ignore();
			getline(nhap,a.address);
			nhap >> a.taxcode;
			nhap >> a.daywork;
        	return nhap;
		}

		friend ostream& operator >> (ostream& xuat ,NhanVien a){
			if(a.birthday[1]=='/') a.birthday = "0" + a.birthday;
			if(a.birthday[4]=='/') a.birthday.insert(a.birthday.begin()+3,'0');
			if(a.daywork[1]=='/') a.daywork = "0" + a.daywork;
			if(a.daywork[4]=='/') a.daywork.insert(a.daywork.begin()+3,'0');
			xuat << "00001 " <<a.name <<" "<< a.gender <<" "<< a.birthday <<" "<<a.address <<" " << a.taxcode <<" "<<a.daywork;
			return xuat;
		}
};
int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}