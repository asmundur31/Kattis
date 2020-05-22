#include<iostream>
#include<queue>
#include<vector>
#include<climits>
#include<algorithm>
#include<math.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> di;
typedef vector<di> vdi;
typedef vector<vdi> vvdi;
typedef vector<double> vd;
int dijkstra(vvdi& g, int a, int b) {
  vd dist(g.size(), INT_MAX);
  priority_queue<di> pq;
  dist[a] = 0;
  pq.push(di(0, a));
  while(!pq.empty()) {
    auto t = pq.top();
    pq.pop();
    if(-t.first != dist[t.second]) continue;
    for(di x : g[t.second]) {
      if(dist[t.second] + x.first < dist[x.second]) {
        dist[x.second] = dist[t.second] + x.first;
        pq.push(di(-dist[x.second], x.second));
      }
    }
  }
  return dist[b];
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int A,H;
  cin>>A>>H;
  int n,m;
  cin>>n>>m;
  vvdi net(n+1);
  int v,u,a,h,w;
  for(int i=0; i<m; i++){
    cin>>v>>u>>a>>h;
    w=a*floor((h-1)/A);
    net[v].push_back(di(w,u));
  }
  int heilsa;
  if(H<0) cout<<"Oh no\n";
  else{
    heilsa = dijkstra(net,1,n);
    if(H-heilsa<=0) cout<<"Oh no\n";
    else cout<<H-heilsa<<"\n";
  }
}
