#include<bits/stdc++.h>
using namespace std;

long long n, x;
vector<long long> a;

void init(){
  cin >> n >> x;
  a.assign(n+1, 0);
  for(int i = 1; i <= n; i++) cin >> a[i];
}
void solve () {
  long long pos = 0;
  for(int i = 1; i <= n; i++)
    if (a[i] <= x && a[i] > a[pos])
      pos = i;
  !pos ? cout << "-1\n" : cout << pos << endl;
}

int main () {
  int t;
  cin >> t;
  while(t--){
    init();
    solve();
  }
  return 0;
}