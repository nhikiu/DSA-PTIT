#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int solve(int a[], int n, int x){
    int left = 0, right = n - 1, mid;
    while(left <= right){
        mid = (left + right)/2;
        if(x > a[mid]){
            left = mid + 1;
        }
        else if(x < a[mid]){
            right = mid - 1;
        }
        else return 1;
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        nhap(a, n);
        cout << solve(a, n, x);
        cout << endl;
    }
    return 0;
}