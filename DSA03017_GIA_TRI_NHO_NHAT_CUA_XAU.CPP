#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

string s;
int k;

void solve(){
  unordered_map<char, int> mark;
  cin >> k >> s;
  for (auto i:s)  mark[i]++;
  priority_queue<int> q;
  for (auto i:mark) {
    q.push(i.second);
  }
  int temp;
  while (k--) {
    temp = q.top() - 1;
    q.pop();
    q.push(temp);
  }
  temp = 0;
  while (!q.empty()) {
    temp += q.top() * q.top();
    q.pop();
  }
  cout << temp << endl;
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}