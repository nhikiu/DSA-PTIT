#include<bits/stdc++.h>
using namespace std;

int n, a[1001];

void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
}

void sinh(){
	int i = n - 1;
	while(i >= 0 && a[i] > a[i + 1]) i--;
	if(i >= 1){
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
	int t;
	cin >> t;
	while(t--){
		nhap();
		sinh();
		display();
	}
	return 0;
}