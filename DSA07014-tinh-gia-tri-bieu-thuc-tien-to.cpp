#include<bits/stdc++.h>
using namespace std;

int ok(char c){
  if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^') return 1;
  return 0;
}

void solve(string s){
  int n = s.length();
  stack<long long> st;
  for(int i = n - 1; i >= 0; i--){
    if(!isdigit(s[i])){
      long long op1 = st.top();
      st.pop();
      long long op2 = st.top();
      st.pop();
      long long ans;
      if(s[i] == '+') ans = op1 + op2;
      else if(s[i] == '-') ans = op1 - op2;
      else if(s[i] == '*') ans = op1 * op2;
      else if(s[i] == '/') ans = op1 / op2;
      else if(s[i] == '^') ans = pow(op1, op2);
      st.push(ans);
    }
    else st.push(s[i] - '0');
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