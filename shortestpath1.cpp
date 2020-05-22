#include<iostream>
#include<vector>
#include<queue>
#include<limits>
#include<algorithm>
using namespace std;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int,int> ii;
typedef pair<long,int> li;
typedef vector<ii> vii;
typedef vector<vii> vvii;
int dijkstra(vvii& g, int a, int b) {
  vl dist(g.size(), RAND_MAX);
  vi prv(g.size(), -1);
  priority_queue<ii> pq;
  dist[a] = 0;
  pq.push(ii(0, a));
  while(!pq.empty()) {
    auto t = pq.top();
    pq.pop();
    if(-t.first != dist[t.second]) continue;
    for(li x : g[t.second]) {
      if(dist[t.second] + x.first < dist[x.second]) {
        dist[x.second] = dist[t.second] + x.first;
        prv[x.second] = t.second;
        pq.push(ii(-dist[x.second], x.second));
      }
    }
  }
  return dist[b];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, q, start, a, b;
  int w;
  int end;
  cin >> n >> m >> q >> start;
  while(n+m+q+start!=0){
    vvii g(n, vii());
    for(int i = 0; i < m; i++) {
      cin >> a >> b >> w;
      g[a].push_back(ii(w, b));
    }
    for(int i=0; i<q; i++){
      cin >> end;
      auto len = dijkstra(g, start, end);
      if(start==end) cout << 0 << "\n";
      else if(len==RAND_MAX) cout << "Impossible\n";
      else cout << len << "\n";
    }
    cout<<"\n";
    cin >> n >> m >> q >> start;
  }
}
