#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;

int compare(pair<int,ii> x, pair<int,ii> y){
  if(x.second.first==y.second.first){
    if(x.second.second==y.second.second) return x.first<y.first;
    return x.second.second<y.second.second;
  }
  return x.second.first<y.second.first;
}

struct union_find {
  vi p;
  union_find(int n) : p(n, -1){ }
  int find(int x){
    return p[x] < 0 ? x : p[x] = find(p[x]);
  }
  bool unite(int x, int y){
    int xp = find(x);
    int yp = find(y);
    if(xp == yp) return false;
    if(p[xp] > p[yp]){
      int t = p[xp];
      p[xp]=p[yp];
      p[yp]=t;
    }
    p[xp] += p[yp];
    p[yp] = xp;
    return true;
  }
  int size(int x){
    return -p[find(x)];
  }
};

vector< pair<int,ii> > mst(int n, vector< pair<int,ii> > edges){
  union_find uf(n);
  sort(edges.begin(), edges.end());
  vector< pair<int,ii> > res;
  for(int i=0; i<edges.size(); i++){
    if(uf.find(edges[i].second.first) != uf.find(edges[i].second.second)){
      res.push_back(edges[i]);
      uf.unite(edges[i].second.first, edges[i].second.second);
    }
  }
  return res;
}

int main(){
  int n,m;
  cin>>n>>m;
  while(n+m!=0){
    int u,v,w;
    vector< pair<int,ii> > edges(m);
    for(int i=0; i<m; i++){
      cin>>u>>v>>w;
      pair<int,ii> par;
      if(u<v) par=make_pair(w,make_pair(u,v));
      else par=make_pair(w,make_pair(v,u));
      edges[i]=par;
    }
    vector< pair<int,ii> > minnstaTre = mst(n,edges);
    sort(minnstaTre.begin(), minnstaTre.end(), compare);
    int sum=0;
    if(minnstaTre.size()!=n-1) cout<<"Impossible\n";
    else{
      for(int i=0; i<minnstaTre.size(); i++){
        sum+=minnstaTre[i].first;
      }
      cout<<sum<<"\n";
      for(int i=0; i<minnstaTre.size(); i++){
        cout<<minnstaTre[i].second.first<<" "<<minnstaTre[i].second.second<<"\n";
      }
    }
    cin>>n>>m;
  }
}
