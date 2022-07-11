#include<bits/stdc++.h>
using namespace std;

string s;
int n, cau_hinh_cuoi_cung;

void khoi_tao(){
	for (int i = 1; i <= n; i++){
		s[i] = 'A';
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && s[i] == 'B'){
		s[i] = 'A';
		i--;
	}
	if(i == 0){
		cau_hinh_cuoi_cung = 1;
	}
	else{
		s[i] = 'B';
	}
}

void display(){
	for(int i = 1; i <= n; i++){
		cout << s[i];
	}
	cout << " ";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cau_hinh_cuoi_cung = 0;
		khoi_tao();
		while(!cau_hinh_cuoi_cung){
			display();
			sinh();
		}
		cout << endl;
	}
	return 0;
}
