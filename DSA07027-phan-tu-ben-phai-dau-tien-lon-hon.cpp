#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[n], ans[n];
  for(int &x : a) cin >> x;
  stack<int> st;
  for(int i = 0; i < n; i++){
    if(st.empty()) st.push(i);
    else{
      while(!st.empty() && a[st.top()] < a[i]){
        ans[st.top()] = a[i];
        st.pop();
      }
      st.push(i);
    }
  }
  while(!st.empty()){
    ans[st.top()] = -1;
    st.pop();
  }
  for(int x : ans){
    cout << x << " ";
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