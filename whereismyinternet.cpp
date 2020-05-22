#include<iostream>
using namespace std;
int p[200000];
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
  int N,M;
  cin>>N>>M;
  for(int i=0; i<N; i++){
    p[i]=i;
  }
  int a,b;
  for(int i=0; i<M; i++){
    cin>>a>>b;
    join(a-1,b-1);
  }
  int count=0;
  for(int i=0; i<N; i++){
    if(p[i]!=0 && find(i)!=find(0)){
      cout<<i+1<<"\n";
      count++;
    }
  }
  if(count==0) cout<<"Connected\n";
}
