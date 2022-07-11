#include<bits/stdc++.h>
using namespace std;

int n = 8, a[100], cau_hinh_cuoi_cung;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 2){
		a[i] = 0;
		i--;
	}
	if(i == 0) cau_hinh_cuoi_cung = 1;
	else{
		a[i] = 2;
	}
}

void display(){
	cout << a[1] << a[2] << "/" << a[3] << a[4] << "/"
	<< a[5] << a[6] << a[7] << a[8] << endl;
}

bool check(){
	int day = a[1] * 10 + a[2];
	int month = a[3] * 10 + a[4];
	if(day >= 1 && day <= 31 && month >= 1 && month <= 12 && a[5] == 2) return true;
	return false;
}

int main(){
	cau_hinh_cuoi_cung = 0;
	while(!cau_hinh_cuoi_cung){
		if(check()) display();
		sinh();
	}
	return 0;
}