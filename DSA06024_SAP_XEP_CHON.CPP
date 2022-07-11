#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
	for	(int i = 0; i < n; i++) cin >> a[i];
}

void sxchon(int a[], int n){
	int min;
	for(int i = 0; i < n - 1; i++){
		min = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min]) min = j;
		}
		swap(a[min], a[i]);
		cout << "Buoc " << i + 1 << ": ";
		for(int j = 0; j < n; j++) cout << a[j] << " ";
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