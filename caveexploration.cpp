#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
vi low, num;
int curnum;
void dfs(vvi &g, vi &cp, vii &bri, int u, int p) {
  low[u] = num[u] = curnum++;
  int cnt = 0; bool found = false;
  for(int v : g[u]) {
    if(num[v] == -1) {
      dfs(g, cp, bri, v, u);
      low[u] = min(low[u], low[v]);
      cnt++;
      found |= low[v] >= num[u];
      if(low[v] > num[u]) bri.push_back(ii(u, v));
    }
    else if(p != v) low[u] = min(low[u], num[v]);
  }
  if(found && (p != -1 || cnt > 1)) cp.push_back(u);
}
pair<vi,vii> cutpointsbridges(vvi &g) {
  vi cp; vii bri;
  num = vi(g.size(), -1);
  low.resize(g.size());
  curnum = 0;
  for(int i = 0; i < g.size(); ++i) {
    if(num[i] == -1) {
      dfs(g, cp, bri, i, -1);
    }
  }
  return pair<vi,vii>(cp, bri);
}
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int N,M;
  cin>>N>>M;
  vvi g(N);
  int x,y;
  for(int i=0; i<M; i++){
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  vii j = cutpointsbridges(g).second;
  vi h;
  for(int i=0; i<j.size(); i++){
    h.push_back(j[i].second);
  }
  queue<int> q;
  vector<bool> d(N, false);
  int count=0;
  q.push(0);
  d[0] = true;
  while(!q.empty()){
    int cur = q.front();
    q.pop();
    count++;
    for(int x : g[cur]) {
      if(d[x] || h.end()!=find(h.begin(), h.end(), x)) continue;
      d[x] = true;
      q.push(x);
    }
  }
  cout<<count<<"\n";
}
