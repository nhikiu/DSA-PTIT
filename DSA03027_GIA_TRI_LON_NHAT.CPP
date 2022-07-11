#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

int n;

void solve(){
  long long x, sum = 0;
  cin >> n;
  while (n--) {
    cin >> x;
    sum += x + abs(x);
  }
  cout << sum << endl;
}

int main(){
  solve();
  return 0;
}