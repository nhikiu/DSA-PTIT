#include<bits/stdc++.h>
using namespace std;
int x;

int sap_xep(int a, int b){
  return abs(x - a) < abs(x - b);
}

void solve(int *a, int n){
  stable_sort(a, a + n, sap_xep);
  for (int i = 0; i < n; i++) cout << a[i] << " ";
  cout << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n >> x;
    int *a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    solve(a, n);
    delete[] a;
  }
  return 0;
}