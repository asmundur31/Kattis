#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> t(n);
  int komid[7];
  for(int i=0; i<7; i++) komid[i]=-1;
  komid[0]=1;
  bool none=false;
  int sum=0;
  for(int i=0; i<n; i++){
    cin>>t[i];
    if(komid[t[i]]==-1){
      komid[t[i]]=0;
    }
    else if(komid[t[i]]==0){
      komid[t[i]]=1;
      sum++;
    }
    if(sum==6){
      none=true;
      break;
    }
  }
  if(none) cout<<"none\n";
  else{
    int max=6;
    while(komid[max]!=0 && max>0) max--;
    if(komid[max]==0){
      for(int i=0; i<n; i++){
        if(t[i]==max) cout<<i+1<<"\n";
      }
    }
    else cout<<"none\n";
  }
}
