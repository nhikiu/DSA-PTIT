#include<bits/stdc++.h>
using namespace std;

int V, E, x, y, components;
vector<vector<int> > g;
vector<pair<int, int> > edge;
vector<bool> vs;

void init(){
  components = 0, x = y = -1;
  cin >> V >> E;
  g.clear(); g.resize(V+5);
  edge.clear(); edge.resize(E+5);
  vs.assign(V+5, false);
  int u, v;
  for(int i = 1; i <= E; i++){
    cin >> u >> v;
    edge[i] = {u, v};
    g[u].push_back(v);
    g[v].push_back(u);
  }
}

void bfs (int s) {
  queue<int> q;
  q.push(s);
  vs[s] = true;
  while (!q.empty()){
    int u = q.front();
    q.pop();
    if (!g[u].empty())
    for (int v:g[u]){
      if ((u == x && v == y) || (u == y && v == x)) continue;
      if (!vs[v]){
        q.push(v);
        vs[v] = true;
      }
    }
  }
}

void interconnectionComponents (int &cou) {
  for(int i = 1; i <= V; i++){
    if (!vs[i]) {
      ++cou;
      bfs(i);
    }
  }
}

void findingBridge () {
  int cou = 0;
  vs.clear(); vs.assign(V+5, false);
  for(int i = 1; i <= V; i++){
    interconnectionComponents(cou);
  }
  if(cou > components) cout << x << " " << y << " ";
}

void solution () {
  init();
  interconnectionComponents(components);
  for(int i = 1; i <= E; i++){
    x = edge[i].first, y = edge[i].second;
    findingBridge();
  }
  cout << endl;
}
int main () {
  int t; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}