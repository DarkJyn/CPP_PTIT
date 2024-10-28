#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
void chuanhoaten(string s){
	stringstream ss(s);
	string word;
	while(ss >> word){
		if(word[0] >= 'a' && word[0] <= 'z'){
			word[0] -= 32;
		}
		cout << word[0];
		int lens = word.size();
		for(int i = 1;i < lens;++i){
			if(word[i] >= 'A' && word[i] <= 'Z'){
				word[i] += 32;
			}
			cout << word[i];
		}
		cout <<" ";
	}
	cout <<"\n";
}
signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	freopen("DATA.in","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	while(1){
		string s;
		getline(cin,s);
		if(s == "END") break;
		chuanhoaten(s);
	}
}