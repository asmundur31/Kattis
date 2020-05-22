#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
struct union_find {
  vi p;
  union_find(int n) : p(n, -1) { }
  int find(int x) {
    return p[x] < 0 ? x : p[x] = find(p[x]);
  }
  bool united(int x, int y) {
    return find(x) == find(y);
  }
  void unite(int x, int y) {
    int xp = find(x), yp = find(y);
    if (xp == yp) return;
    if (p[xp] > p[yp]) swap(xp,yp);
    p[xp] += p[yp], p[yp] = xp;
    return;
  }
  int size(int x) {
    return -p[find(x)];
  }
};
vi ord;
vector<bool> done;
void dfs(vvi& g, int v) {
  done[v] = true;
  for(int x : g[v]) if(!done[x]) dfs(g, x);
  ord.push_back(v);
}
pair<union_find, vi> tarjan(vvi& g) {
  ord.clear();
  union_find uf(g.size());
  vi dag;
  vvi gr(g.size());
  for(int i = 0; i < g.size(); ++i) {
    for(int x : g[i]) {
      gr[x].push_back(i);
    }
  }
  done.resize(g.size());
  for(int i = 0; i < g.size(); ++i)
    done[i] = false;
  for(int i = 0; i < g.size(); ++i)
    if(!done[i]) dfs(gr, i);
  for(int i = 0; i < g.size(); ++i)
    done[i] = false;
  stack<int> s;
  for(int i = g.size() - 1; i >= 0; --i) {
    if(done[ord[i]]) continue;
    s.push(ord[i]);
    dag.push_back(ord[i]);
    while(!s.empty()) {
      int t = s.top();
      done[t] = true;
      s.pop();
      uf.unite(t, ord[i]);
      for(int x : g[t]) {
        if(!done[x]) s.push(x);
      }
    }
  }
  reverse(dag.begin(), dag.end());
  return make_pair(uf, dag);
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, a, b;
  cin >> n >> m;
  vvi g(n, vi());
  for(int i = 0; i < m; i++) {
    cin >> a >> b;
    g[a].push_back(b);
  }
  auto t = tarjan(g);
  bool ok = true;
  vi ut;
  for(int x=0; x<t.second.size()-1; x++) {
    if(find(g[t.second[x]].begin(), g[t.second[x]].end(), t.second[x+1])==g[t.second[x]].end()){
      ok=false;
    }
    else{
      ok=true;
    }
    if(!ok){
      break;
    }
    else{
      ut.push_back(t.second[x]);
    }
  }
  ut.push_back(t.second[t.second.size()-1]);
  if(ok){
    for(int i=0; i<ut.size(); i++){
      cout << ut[i] << ' ';
    }
    cout << '\n';
  }
  else cout << "back to the lab\n";
}
