#include<bits/stdc++.h>
using namespace std;

int n, a[1001], cau_hinh_cuoi_cung;
string s;

void cau_hinh_dau_tien(){
	sort(a + 1, a + n + 1);
}

void sinh(){
	int i = n - 1;
	while(i >= 0 && a[i] >= a[i + 1]) i--;
	if(i == 0) cau_hinh_cuoi_cung = 1;
	else{
		int j = n;
		while(a[i] >= a[j]){
			j--;
		}
		swap(a[i], a[j]);
		sort(a + i + 1, a + n + 1);
	}
}

void display(){
	for (int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}

int main(){
	int t, j;
	cin >> t;
	while(t--){
		cin >> j >> s;
		n = s.length();
		cau_hinh_cuoi_cung = 0;
		for (int i = 1; i <= n; i++) a[i] = s[i - 1] - '0';
		sinh();
		cout << j << " ";
		if(cau_hinh_cuoi_cung) cout << "BIGGEST\n";
		else display();
	}
	return 0;
}