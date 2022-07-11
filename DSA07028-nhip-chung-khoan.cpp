#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n){
  stack<int> st;
  for(int i = 0; i < n; i++){
    while(!st.empty() && a[i] >= a[st.top()]){
      st.pop();
    }
    if(st.empty()) cout << i + 1 << " ";
    else cout << i - st.top() << " ";
    st.push(i);
  }
  cout << endl;
}


int main(){
  int t, n;
  cin >> t;
  while(t--){
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    solve(a, n);
  }
  return 0;
}