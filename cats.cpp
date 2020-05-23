#include<iostream>
#include<vector>
#include<queue>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef pair<int,ii> iii;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
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
double kruskal(vvii& g) {
  priority_queue<iii> s;
  union_find uf(g.size());
  double res = 0;
  for(int i = 0; i < g.size(); ++i)
  for(auto x : g[i]) s.push(iii(-x.first, ii(x.second, i)));
  while(uf.size(0) < g.size()) {
    auto x = s.top();
    s.pop();
    if(uf.united(x.second.first, x.second.second)) continue;
    res -= x.first; uf.unite(x.second.first, x.second.second);
  }
  return res;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  int M,C;
  int a, b;
  int w;
  for(int t=0; t<T; t++){
    cin >> M >> C;
    vvii g(C, vii());
    for(int i = 0; i < C*(C-1)/2; ++i) {
      cin >> a >> b >> w;
      g[a].push_back(ii(w, b));
      g[b].push_back(ii(w, a));
    }
    int len = kruskal(g);
    if(len+C>M) cout << "no\n";
    else cout << "yes\n";
  }
}
