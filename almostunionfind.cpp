#include<iostream>
#include<vector>
using namespace std;
int p[200005];
int fjoldi[200005];
long int summa[200005];
int find(int x){
  if(p[x]==x){
    return x;
  }
  else{
    return p[x]=find(p[x]);
  }
}
void join(int x, int y){
  x=find(x);
  y=find(y);
  if(x!=y){
    fjoldi[y]+=fjoldi[x];
    summa[y]+=summa[x];
    p[x]=y;
  }
}
void move(int x, int y){
  int findx=find(x);
  int findy=find(y);
  if(findx!=findy){
    fjoldi[findx]--;
    fjoldi[findy]++;
    summa[findx]-=x;
    summa[findy]+=x;
    p[x]=findy;
  }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n,m;
  while(cin>>n>>m){
    for(int i=1, j=n+1; i<=n; ++i, ++j){
      p[i]=j;
      p[j]=j;
      fjoldi[j]=1;
      summa[j]=i;
    }
    int adgerd,a,b;
    for(int i=0; i<m; i++){
      cin>>adgerd;
      if(adgerd==1){
        cin>>a>>b;
        join(a,b);
      }
      else if(adgerd==2){
        cin>>a>>b;
        move(a,b);
      }
      else{
        cin>>a;
        cout<<fjoldi[find(a)]<<" "<<summa[find(a)]<<"\n";
      }
    }
  }
}
