#include<bits/stdc++.h>
using namespace std;

int n, a[1001], cau_hinh_cuoi_cung;

void cau_hinh_dau_tien(){
	sort(a + 1, a + n + 1);
}

void sinh(){
	int i = n - 1;
	while(i >= 0 && a[i] > a[i + 1]) i--;
	if(i == 0) cau_hinh_cuoi_cung = 1;
	else{
		int j = n;
		while(a[i] > a[j]){
			j--;
		}
		swap(a[i], a[j]);
		int l = i + 1, r = n;
		while(l < r){
			swap(a[l], a[r]);
			l++;
			r--;
		}
	}
}

void display(){
	for (int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	cin >> n;
	cau_hinh_cuoi_cung = 0;
	for (int i = 1; i <= n; i++) cin >> a[i];
	cau_hinh_dau_tien();
	while(!cau_hinh_cuoi_cung){
		display();
		sinh();
	}
	return 0;
}