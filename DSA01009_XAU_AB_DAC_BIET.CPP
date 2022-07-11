#include<bits/stdc++.h>
using namespace std;

int n, k, cau_hinh_cuoi_cung, cnt;
string a;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 'A';
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 'B'){
		a[i] = 'A';
		i--;
	}
	if(i == 0) cau_hinh_cuoi_cung = 1;
	else{
		a[i] = 'B';
	}
}

void display(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}

bool check(){
	int count = 0, res = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 'A') count++;
		else count = 0;
		if(count > k) return false;
		if(count == k) res++;
	}
	return res == 1;
}

int main(){
	cin >> n >> k;
	cau_hinh_cuoi_cung = 0;
	//dem so cau hinh thoa man
	ktao();
	int dem = 0;
	while(!cau_hinh_cuoi_cung){
		if(check()) dem++;
		sinh();
	}
	cout << dem << endl;
	//in ra cau  hinh thoa man
	cau_hinh_cuoi_cung = 0;
	ktao();
	while(!cau_hinh_cuoi_cung){
		if(check()) display();
		sinh();
	}
	return 0;
}