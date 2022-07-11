#include<bits/stdc++.h>
using namespace std;

int solve(int s, int t){
  queue<pair<int, int>> q;
  set<int> se;
  se.insert(s);
  q.push({s, 0});
  while(!q.empty()){
    pair<int, int> top = q.front();
    q.pop();
    if(top.first == t) return top.second;
    if(top.first * 2 == t || top.first - 1 == t) return top.second + 1;
    if(se.find(top.first * 2) == se.end() && top.first < t){
      q.push({top.first * 2, top.second + 1});
      se.insert(top.first * 2);
    }
    if(se.find(top.first - 1) == se.end() && top.first > 1){
      q.push({top.first - 1, top.second + 1});
      se.insert(top.first - 1);
    }
  }
}

int main(){
  int test;
  cin >> test;
  while(test--){
    int s, t;
    cin >> s >> t;
    cout << solve(s, t) << endl;
  }
  return 0;
}

/* CACh 2
#include<bits/stdc++.h>
using namespace std;

int solve(){
	int s, t;
	cin >> s >> t;
	queue<pair<int, int>> q;
	set<int> se;
	vector<int> vs(1e5 + 9, 0);
	q.push({s, 0});
	while(!q.empty()){
		auto p = q.front();
		q.pop();
		if(p.first == t) return p.second;
		if(!vs[p.first * 2] && p.first < t){
			q.push({p.first * 2, p.second + 1});
			vs[p.first * 2] = 1;
		}
		if(!vs[p.first - 1] && p.first > 1){
			q.push({p.first - 1, p.second + 1});
			vs[p.first - 1] = 1;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cout << solve() << endl;
	}
	return 0;
}
*/