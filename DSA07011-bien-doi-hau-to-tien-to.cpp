#include<bits/stdc++.h>
using namespace std;

int ok(char c){
  if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^') return 1;
  return 0;
}

void solve(string s){
  int n = s.length();
  stack<string> st;
  for(int i = 0; i < n; i++){
    if(ok(s[i])){
      string op2 = st.top();
      st.pop();
      string op1 = st.top();
      st.pop();
      string ans = s[i] + op1 + op2;
      st.push(ans);
    }
    else st.push(string(1, s[i]));
  }
  cout << st.top() << endl;
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