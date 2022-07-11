#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
	for	(int i = 0; i < n; i++) cin >> a[i];
}

void sxchon(int a[], int n){
	int min;
	int b[n][n];
	for(int i = 0; i < n - 1; i++){
		min = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min]) min = j;
		}
		swap(a[min], a[i]);

		for(int j = 0; j < n; j++) b[i][j] = a[j];
	}
	for(int i = n - 2; i >= 0; i--){
		cout << "Buoc " << i + 1 << ": ";
		for(int j = 0; j < n; j++){
			cout << b[i][j] << " ";
		}
		cout <<  endl;
	}
}

int main(){
	int n;
	cin >> n;
	int *a = new int[n];
	nhap(a, n);
	sxchon(a, n);
	return 0;
}