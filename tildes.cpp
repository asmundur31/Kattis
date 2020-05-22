#include<iostream>
using namespace std;
int p[1000001];
int gildi[1000001];
int find(int x){
  if(p[x]==x){
    return x;
  }
  else{
    p[x]=find(p[x]);
    return p[x];
  }
}
void join(int x, int y){
  if(find(x)!=find(y)) gildi[find(x)]+=gildi[find(y)];
  p[find(y)]=find(x);
}
int main(){
  int n,q;
  cin>>n>>q;
  for(int i=0; i<=n; i++){
    p[i]=i;
  }
  for(int i=0; i<=n; i++){
    gildi[i]=1;
  }
  char c;
  int a,b;
  for(int i=0; i<q; i++){
    cin>>c;
    if(c=='t'){
      cin>>a>>b;
      join(a,b);
    }
    else{
      cin>>a;
      cout<<gildi[find(a)]<<"\n";
    }
  }
}
