#include<bits/stdc++.h>
using namespace std;

int check(char c){
  if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^') return 1;
  return 0;
}

void solve(string s){
  int n = s.length();
  stack<string> st;
  for(int i = n - 1; i >= 0; i--){
    if(check(s[i])){
      string op1 = st.top();
      st.pop();
      string op2 = st.top();
      st.pop();
      string ans = "(" + op1 + s[i] + op2 + ")";
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