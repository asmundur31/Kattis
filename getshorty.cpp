#include<iostream>
#include<vector>
#include<queue>
#include<cfloat>
#include<algorithm>
#include<stdlib.h>
using namespace std;
typedef vector<int> vi;
typedef pair<double,int> di;
typedef vector<di> vdi;
typedef vector<vdi> vvdi;
typedef vector<double> vd;
double dijkstra(vvdi& g, int a, int b) {
  vd dist(g.size(), 0);
  priority_queue<di> pq;
  dist[a] =1;
  pq.push(di(1,a));
  while(!pq.empty()) {
    auto t = pq.top();
    pq.pop();
    if(t.first != dist[t.second]) continue;
    for(di x : g[t.second]) {
      if(dist[t.second] * x.first > dist[x.second]) {
        dist[x.second] = dist[t.second] * x.first;
        pq.push(di(dist[x.second], x.second));
      }
    }
  }
  return dist[b];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, a, b;
  double w;
  cin >> n >> m;
  while(n+m!=0){
    vvdi g(n, vdi());
    for(int i = 0; i < m; ++i) {
      cin >> a >> b >> w;
      g[a].push_back(di(w, b));
      g[b].push_back(di(w, a));
    }
    double len = dijkstra(g, 0, n - 1);
    printf("%.4f\n",len);
    cin >> n >> m;
  }
}
