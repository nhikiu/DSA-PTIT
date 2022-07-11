#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

void solve(){
  cin >> n;
  a.assign(n, 0);
  for (auto &i:a) cin >> i;
  sort(a.begin(), a.end());
  long long x1 = a[0] * a[1];
  long long x2 = a[n-1] * a[n-2];
  long long x3 = x1 * a[n-1];
  long long x4 = x2 * a[n-3];
  cout << max(max(x2, x2), max(x3, x4)) << endl;
}

int main(){
  solve();
  return 0;
}