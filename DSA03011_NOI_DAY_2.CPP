#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;


long long n, x;

void solve(){
  priority_queue <long long, vector<long long>, greater<long long>> q;
  cin >> n;
  while (n--) {
    cin >> x;
    q.push(x);
  }
  long long sum = 0;
  while (q.size() > 1) {
    x = q.top();
    q.pop();
    x += q.top();
    x %= mod;
    q.pop();
    q.push(x);
    sum += x;
    sum %= mod;
  }
  cout << sum << endl;
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}