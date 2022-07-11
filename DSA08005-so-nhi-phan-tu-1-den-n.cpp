#include<bits/stdc++.h>
using namespace std;

void solve(){
  queue<string> q;
  vector<string> ans;
  int n;
  cin >> n;
  q.push("1");
  ans.push_back("1");
  for(int i = 1; i <= n / 2; i++){
    string top = q.front();
    q.pop();
    ans.push_back(top + "0");
    ans.push_back(top + "1");
    q.push(top + "0");
    q.push(top + "1");
  }
  for(int i = 0; i < n; i++){
    cout << ans[i] << " ";
  }
  cout << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}