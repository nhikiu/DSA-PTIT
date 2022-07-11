#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  queue<string> q;
  q.push("6");
  q.push("8");
  string tmp = q.front();
  stack<string> s;
  while(tmp.length() <= n){
    s.push(tmp);
    q.push(tmp + "6");
    q.push(tmp + "8");
    q.pop();
    tmp = q.front();
  }
  cout << s.size() << endl;
  while(!s.empty()){
    cout << s.top() << " ";
    s.pop();
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