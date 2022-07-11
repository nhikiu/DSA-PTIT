#include<bits/stdc++.h>
using namespace std;

int V, E, components;
vector<vector<int> > g;
vector<bool> vs;

void init(){
  components = 0;
  cin >> V >> E;
  g.clear();
  g.resize(V+5);
  vs.assign(V+5, false);
  int x, y;
  for(int i = 1; i <= E; i++){
    cin >> x >> y;
    g[x].push_back(y), g[y].push_back(x);
  }
}

void bfs(int s){
  queue<int> q;
  q.push(s);
  vs[s] = true;
  while (!q.empty()) {
    int u = q.front(); q.pop();
    if (!g[u].empty())
    for (int v:g[u]) {
      if (!vs[v]) {
        q.push(v);
        vs[v] = true;
      }
    }
  }
}

void interconnectionComponents(int &cou){
  for(int i = 1; i <= V; i++)
    if (!vs[i]) {
      ++cou;
      bfs(i);
    }
}

void findingJoint(int s){
  int cou = 0;
  vs.clear(); vs.assign(V+5, false);
  vs[s] = true;
  for(int i = 1; i <= V; i++)
    if (!vs[i])
      interconnectionComponents(cou);
  if(cou > components)
    cout << s << " ";
}

void solve(){
  init();
  interconnectionComponents(components);
  for(int i = 1; i <= V; i++)
    findingJoint (i);
  cout << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}