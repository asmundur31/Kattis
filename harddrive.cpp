#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,c,b;
  cin>>n>>c>>b;
  vector<int> broke(b);
  for(int i=0; i<b; i++) cin>>broke[i];
  vector<int> lausn(n);
  for(int i=0; i<n; i++) lausn[i]=-1;
  for(int i=0; i<b; i++) lausn[broke[i]-1]=0;
  for(int i=n-2; i>=0; i--){
    if(c<=1) break;
    if(lausn[i]==0) continue;
    else if(lausn[i+1]==0){
      lausn[i]=1;
      c-=2;
    }
    else if(lausn[i+1]==1){
      lausn[i]=0;
    }
  }
  for(int i=1; i<n; i++){
    if(lausn[i]==-1) lausn[i]=0;
    if(lausn[i]==1) break;
  }
  if(c==1) lausn[0]=1;
  else lausn[0]=0;
  for(int i=0; i<n; i++) cout<<lausn[i];
  cout<<"\n";
}
