#include<bits/stdc++.h>
using namespace std;

vector<long long> answer;

void solve(){
  queue<long long> q;
  int n;
  cin >> n;
  q.push(9);
  long long ll = q.front();
  while(ll % n != 0){
    q.pop();
    q.push(ll * 10);
    q.push(ll * 10 + 9);
    ll = q.front();
  }
  cout << ll << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}