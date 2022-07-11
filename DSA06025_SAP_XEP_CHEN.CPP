#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
	for	(int i = 0; i < n; i++) cin >> a[i];
}

void sxchon(int a[], int n){
	int j, check;
	for(int i = 0; i < n; i++){
		check = a[i];
		j = i - 1;
		while(j >= 0 && a[j] > check){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = check;
		cout << "Buoc " << i << ": ";
		for (int j = 0; j <= i; j++) cout << a[j] << " ";
		cout << endl;
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