#include<iostream>
#include<string>
#include<map>
using namespace std;
map <string,string> p;
map <string,int> fjoldi;
string find(string x){
  if(p[x]==x){
    return x;
  }
  else{
    p[x]=find(p[x]);
    return p[x];
  }
}
void join(string x, string y){
  if(find(x)!=find(y)) fjoldi[find(x)]+=fjoldi[find(y)];
  p[find(y)]=find(x);
}

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int T,F;
  cin>>T;
  string a,b;
  for(int j=0; j<T; j++){
    fjoldi.clear();
    p.clear();
    cin>>F;
    for(int i=0; i<F; i++){
      cin>>a>>b;
      if(p.find(a)==p.end()) {
        p[a]=a;
        fjoldi[a]=1;
      }
      if(p.find(b)==p.end()) {
        p[b]=b;
        fjoldi[b]=1;
      }
      join(a,b);
      cout<<fjoldi[find(a)]<<"\n";
    }
  }
}
