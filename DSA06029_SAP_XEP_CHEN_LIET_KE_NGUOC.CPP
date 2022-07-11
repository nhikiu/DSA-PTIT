#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
	for	(int i = 0; i < n; i++) cin >> a[i];
}

void sxchen(int a[], int n){
	int b[n][n];
	int j, check;
	for(int i = 0; i < n; i++){
		check = a[i];
		j = i - 1;
		while(j >= 0 && a[j] > check){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = check;
		for(int j = 0; j <= i; j++) b[i][j] = a[j];

	}
	for (int i = n - 1; i >= 0; i--){
		cout << "Buoc " << i << ": ";
		for (int j = 0; j <= i; j++) cout << b[i][j] << " ";
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	int *a = new int[n];
	nhap(a, n);
	sxchen(a, n);
	return 0;
}