#include<bits/stdc++.h>
using namespace std;

int n, x;
priority_queue<int, vector<int>, greater<int>> q;

void solve(){
  cin >> n;
  while (n--) {
    cin >> x;
    q.push(x);
  }
  long long s = 0;
  while (true) {
    int val = q.top();
    q.pop();
    val += q.top();
    q.pop();
    s += val;
    if (q.empty())  break;
    q.push(val);
  }
  cout << s << endl;
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}