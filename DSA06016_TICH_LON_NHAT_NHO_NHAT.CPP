#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void solve(int a[], int n, int b[], int m){
    sort(a, a + n);
    sort(b, b + m);
    cout << (long long) a[n - 1] * b[0] << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        nhap(a, n);
        nhap(b, m);
        solve(a, n, b, m);
    }
    return 0;
}