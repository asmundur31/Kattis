#include<iostream>
using namespace std;
int p[1000000];
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
  p[find(x)]=find(y);
}
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int N,Q;
  cin>>N>>Q;
  for(int i=0; i<N; i++){
    p[i]=i;
  }
  char t=' ';
  int f,g;
  for(int i=0; i<Q; i++){
    cin>>t>>f>>g;
    if(t=='?'){
      if(find(f)==find(g)) cout<<"yes\n";
      else cout<<"no\n";
    }
    else{
      join(f,g);
    }
  }
}
