#include<bits/stdc++.h>
using namespace std;

void solve(string s){
  int n = s.length();
  stack<string> st;
  st.push("1");
  char max = '2';
  for(int i = 0; i < n; i++){
    if(s[i] == 'D'){
      string c = st.top();
      st.pop();
      c = max + c;
      st.push(c);
    }
    else if(s[i] == 'I'){
      st.push(string(1, max));
    }
    max++;
  }
  vector<string> v;
  int len = st.size();
  while(!st.empty()){
    v.push_back(st.top());
    st.pop();
  }
  for(int i = len - 1; i >= 0; i--){
    cout << v[i];
  }
  cout << endl;
}


int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    solve(s);
  }
  return 0;
}