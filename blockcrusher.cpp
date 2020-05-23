#include<iostream>
#include<queue>
#include<vector>
#include<limits>
#include<string>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef pair<int,ii> iii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
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

pair<vi, int> dijkstra(vvii& g, int a, int b) {
  vi dist(g.size(), RAND_MAX);
  vi prv(g.size(), -1);
  priority_queue<ii> pq;
  dist[a] = 0;
  pq.push(ii(0, a));
  while(!pq.empty()) {
    auto t = pq.top();
    pq.pop();
    if(-t.first != dist[t.second]) continue;
    for(ii x : g[t.second]) {
      if(dist[t.second] + x.first < dist[x.second]) {
        dist[x.second] = dist[t.second] + x.first;
        prv[x.second] = t.second;
        pq.push(ii(-dist[x.second], x.second));
      }
    }
  }
  if(prv[b] == -1) return make_pair(vi(), RAND_MAX);
  vi path(1, b);
  while(path.back() != a) path.push_back(prv[path.back()]);
  reverse(path.begin(), path.end());
  return make_pair(path, dist[b]);
}
int main() {
  int h,w;
  cin>>h>>w;
  string s;
  while(h+w!=0){
    int bord[h][w];
    for(int i=0; i<h; i++){
      cin>>s;
      for(int j=0; j<w; j++){
        bord[i][j]=(int)s[j]-48;
      }
    }
    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        cout<<bord[i][j];
      }
      cout<<'\n';
    }
    cin>>h>>w;
  }
}
