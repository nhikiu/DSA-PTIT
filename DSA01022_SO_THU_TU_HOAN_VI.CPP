#include<bits/stdc++.h>

using namespace std;
int t, dem = 0, a[100];

int check(int s[], int a[], int n){
	for(int i = 1; i <= n; i++){
		if(a[i] != s[i]) return 0;
	}
	return 1;
}

void solve(int s[], int a[], int n){
	dem = 0;
    while(1){
        int i;
        dem++;
        if(check(s, a, n) == 1) break;
        i = n - 1;
        while (i > 0 && a[i] > a[i + 1]) i--;
        if (i == 0) return;
        int k = n;
        while (a[k] < a[i]) k--;
        swap(a[k], a[i]);
        int l = i + 1, r = n;
        while(l < r) {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}

int main(){
	int t;
	cin >> t;
	while(t--){
	    int n;
	    //cout << "Nhap n: ";
	    cin >> n;
	    int s[100];
	    //cout << "Nhap hoan vi can tim: ";
	    for (int i = 1; i <= n; i++) cin >> s[i];
	    	for (int i = 1; i <= n; i++) a[i] = i;
	    solve(s, a, n);
	    cout << dem << endl;
	}
    return 0;
}
