#include<bits/stdc++.h>
using namespace std;

int n, a[100], cau_hinh_cuoi_cung, cnt;

void ktao(){
	cnt = 1;
	a[1] = n;
}

void solve(){
	int i = cnt;
	while(i >= 1 && a[i] == 1){
		i--;
	}
	if(i == 0) cau_hinh_cuoi_cung = 1;
	else{
		a[i]--;
		int d = cnt - i + 1;
		cnt = i;
		int nguyen = d / a[i];
		int du = d % a[i];
		if(nguyen){
			for(int j = 1; j <= nguyen; j++){
				cnt++;
				a[cnt] = a[i];
			}
		}
		if(du){
			cnt++;
			a[cnt] = du;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ktao();
		cau_hinh_cuoi_cung = 0;
		int dem = 0;
		while(!cau_hinh_cuoi_cung){
			dem++;
			solve();
		}
		cout << dem << endl;
		ktao();
		cau_hinh_cuoi_cung = 0;
		while(!cau_hinh_cuoi_cung){
			cout << "(";
			for(int i = 1; i < cnt; i++){
				cout << a[i] << " ";
			}
			cout << a[cnt] << ") ";
			solve();
		}
		cout << endl;
	}
	return 0;
}