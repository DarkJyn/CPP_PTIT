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
		void nhap(){
			getline(cin , name);
			cin >> classcode;
			cin >> birthday;
			cin >> grade;
		}
		void xuat(){
			if(birthday[1]=='/') birthday = "0" + birthday;
			if(birthday[4]=='/') birthday.insert(birthday.begin()+3,'0');
			cout << "B20DCCN001 " << name <<" "<< classcode <<" "<< birthday <<" ";
			printf("%.2f",grade);
		}
};


int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}