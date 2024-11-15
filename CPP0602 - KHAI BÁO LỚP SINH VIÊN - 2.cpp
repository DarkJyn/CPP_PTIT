#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

class SinhVien{
	public:
		string name;
		string classcode;
		string birthday;
		float grade;
		friend ostream& operator << (ostream&xuat, SinhVien a){
			if(a.birthday[1]=='/') a.birthday = "0" + a.birthday;
			if(a.birthday[4]=='/') a.birthday.insert(a.birthday.begin()+3,'0');
			xuat << "B20DCCN001 " << a.name <<" "<< a.classcode <<" "<< a.birthday <<" ";
			printf("%.2f",a.grade);
			return xuat;
		}
		friend istream& operator >> (istream& nhap , SinhVien &a){
        	getline(nhap , a.name);
			nhap >> a.classcode;
			nhap >> a.birthday;
			nhap >> a.grade;
			return nhap;
		}
};


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}