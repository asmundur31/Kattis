#include<iostream>
#include<vector>
#include<queue>
#include<math.h>
#include <iomanip>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef pair<double,ii> dii;
typedef pair<double,int> di;
typedef vector<di> vdi;
typedef vector<vdi> vvdi;
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
double kruskal(vvdi& g) {
  priority_queue<dii> s;
  union_find uf(g.size());
  double res = 0;
  for(int i = 0; i < g.size(); ++i)
    for(auto x : g[i]) s.push(dii(-x.first, ii(x.second, i)));
  while(uf.size(0) < g.size()) {
    auto x = s.top(); s.pop();
    if(uf.united(x.second.first, x.second.second)) continue;
    res -= x.first; uf.unite(x.second.first, x.second.second);
  }
  return res;
}
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int T;
  cin>>T;
  int n;
  double a, b;
  for(int i=0; i<T; i++){
    cin >> n;
    vector< pair<double,double> > hnutar(n);
    vvdi g(n, vdi());
    for(int i = 0; i < n; i++) {
      cin >> a >> b;
      hnutar[i].first = a;
      hnutar[i].second = b;
    }
    for(int i=0; i<n; i++){
      for(int j=i+1; j<n; j++){
        double x = hnutar[i].first-hnutar[j].first;
        double y = hnutar[i].second-hnutar[j].second;

        g[i].push_back(di(sqrt(x*x+y*y), j));
      }
    }
    cout << fixed << setprecision(2);
    cout << kruskal(g) << "\n";
  }
}
