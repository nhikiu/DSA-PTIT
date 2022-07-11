#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;

void solve(){
  cin >> n;
  a.assign(n, 0);
  for (auto &i:a) cin >> i;
  b.assign(a.begin(), a.end());
  sort(b.begin(), b.end());
  int pivot = (n+1)/2;
  for(int i = 1; i <= pivot; i++){
    if (a[i] != b[i] && b[i] != a[n - 1 - i]) {
      cout << "No\n";
      return;
    }
  }
  cout << "Yes\n";
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}