#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n, a[501], cau_hinh_cuoi_cung;
string s(13, '0');
vector<ll> v;

void sinh(){
	int i = s.length() - 1;
	while(i >= 0 && s[i] == '9'){
		s[i] = '0';
		i--;
	}
	if(i == -1) cau_hinh_cuoi_cung = 1;
	else{
		s[i] = '9';
	}
}

void ktao(){
	cau_hinh_cuoi_cung = 0;
	sinh();
	while(!cau_hinh_cuoi_cung){
		//cout << s << endl;
		v.push_back(stoll(s));
		sinh();
	}

	for(int i = 1; i <= 500; i++){
		for(auto it:v){
			if(a[i] == 0 && it % i == 0){
				a[i] = it;
			}
		}
	}
}

int main(){
	ktao();
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cout << a[n] << endl;
	}
	return 0;
}