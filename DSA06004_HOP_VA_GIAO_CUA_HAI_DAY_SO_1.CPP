#include <bits/stdc++.h>
using namespace std;

void solve(int *a, int n, int *b, int m){
  map<int, int> uni;
  for(int i = 0; i < n; i++){
    if((i > 0 && a[i] != a[i - 1]) || i == 0) uni[a[i]]++;
  }
  for(int i = 0; i < m; i++){
    if ((i > 0 && b[i] != b[i - 1]) || i == 0) uni[b[i]]++;
  }
  map<int, int>::iterator it;
  for(it = uni.begin(); it != uni.end(); it++) cout << it->first << " ";
  cout << endl;
  for(it = uni.begin(); it != uni.end(); it++){
    if(it->second > 1) cout << it->first << " ";
  }
  cout << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    int *a = new int[n], *b = new int[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    solve(a, n, b, m);
    delete[] a;
    delete[] b;
  }
}