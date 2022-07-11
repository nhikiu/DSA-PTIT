#include<bits/stdc++.h>
using namespace std;

int main (){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int *a = new int[n], *b = new int[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		int l = 0, r = n - 1;
		while(a[l] == b[l]) l++;
		while(a[r] == b[r]) r--;
		cout << l + 1 << " " << r + 1 << endl;
	    delete[] a;
	    delete[] b;
	}
	return 0;
}