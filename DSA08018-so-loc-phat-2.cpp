#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  queue<string> q;
  q.push("6");
  q.push("8");
  string tmp = q.front();
  vector<string> v;
  while(tmp.length() <= n){
    v.push_back(tmp);
    q.push(tmp + "6");
    q.push(tmp + "8");
    q.pop();
    tmp = q.front();
  }
  cout << v.size() << endl;
  for(auto x : v) cout << x << " ";
  cout << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}