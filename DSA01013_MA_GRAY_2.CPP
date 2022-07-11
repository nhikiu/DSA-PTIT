#include<bits/stdc++.h>
using namespace std;

int n, a, b, bi[100], cau_hinh_cuoi_cung;
string c;

void ktao(){
	for(int i = 1; i <= n; i++){
		bi[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && bi[i] == 1){
		bi[i] = 0;
		i--;
	}
	if(i == 0) cau_hinh_cuoi_cung = 1;
	else bi[i] = 1;
}

void display(){
	for(int i = 1; i <= n; i++){
		cout << bi[i];
	}
	cout << endl;
}

void solve(){
	cin >> c;
	n = c.length();
	int sum = 1;
	for(int i = 1; i <= n; i++){
		sum *= 2;
	}
	string s[sum + 1], bin_String[sum + 1];
	//ham sinh ma binary
	cau_hinh_cuoi_cung = 0;
	ktao();
	int d = 1;
	while(!cau_hinh_cuoi_cung){
		bin_String[d] = "";
		for(int i = 1; i <= n; i++){
			bin_String[d] += (char) bi[i] + '0';
		}
		d++;
		sinh();
	}
	d--;
	//ham sinh ma gray
	s[1] = "0";
	s[2] = "1";
	if(n > 1){
		a = 2;
		for(int i = 2; i <= n; i++){
			b = 1;
			for(int j = 1; j <= i; j++){
				b *= 2;
			}
			for(int j = 1; j <= a; j++){
				s[b - j + 1] = "1" + s[j];
				s[j] = "0" + s[j];
			}
			a = b;
		}
	}
	for(int i = 1; i <= sum; i++){
		if(c.compare(s[i]) == 0){
			cout << bin_String[i] << endl;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}