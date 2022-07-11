#include<bits/stdc++.h>
using namespace std;

int sxgiam(int a, int b){
	return a > b;
}

void nhap(long long a[], int n){
	int A[n], B[n], c1 = 0, c2 = 0;
	for	(int i = 0; i < n; i++){
		cin >> a[i];
		if(i % 2 == 0) A[c1++] = a[i];
		else B[c2++] = a[i];
	}
	sort(A, A + c1);
	sort(B, B + c2, sxgiam);
	for (int i = 0; i < c2; i++) cout << A[i] << " " << B[i] << " ";
	if(n % 2 == 1) cout << A[c2];
	cout << endl;

}

int main(){
	int n;
	cin >> n;
	long long a[n];
	nhap(a, n);
	return 0;
}