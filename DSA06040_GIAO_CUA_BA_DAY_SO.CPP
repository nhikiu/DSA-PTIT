#include <bits/stdc++.h>
using namespace std;

void nhap(long long a[], int n){
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

void xuly(long long a1[], long long a2[], long long a3[], int n1, int n2, int n3){
  	int i = 0, j = 0, k = 0, check = 0;
  	while (i < n1 && j < n2 && k < n3){
    	if (a1[i] == a2[j] && a2[j] == a3[k]){
      		check=1;
		  	cout << a1[i] << " ";
      		i++; j++; k++;
    	}
    	else if (a1[i] < a2[j]) i++;
   	 	else if (a2[j] < a3[k]) j++;
    	else k++;
  	}
  	if(check == 0) cout << "-1";
}

int main(){
  	int t;
  	cin >> t;
  	while(t--){
    	int n1, n2, n3;
    	cin >> n1 >> n2 >> n3;
    	long long a1[n1], a2[n2], a3[n3];
    	nhap(a1, n1), nhap(a2, n2), nhap(a3, n3);
    	xuly(a1, a2, a3, n1, n2, n3);
    	cout << endl;
	}
}