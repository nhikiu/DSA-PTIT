#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
	for	(int i = 0; i < n; i++) cin >> a[i];
}

void bubble_sort(int a[], int n){
	bool check;
	int count, b[n][n];
	for(int i = 0; i < n; i++){
		check = false;
		for (int j = 0; j < n - 1 - i; j++){
			if (a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
				check = true;
			}
		}
		if (check == false) break;
		count = i;
		for (int j = 0; j < n; j++) b[i][j] = a[j];
	}
	for(int i = count; i >= 0; i--){
		cout << "Buoc " << i + 1 << ": ";
		for(int j = 0; j < n; j++) cout << b[i][j] << " ";
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int *a = new int[n];
		nhap(a, n);
		bubble_sort(a, n);
	}
	return 0;
}