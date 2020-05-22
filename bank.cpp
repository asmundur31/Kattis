#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
  int N,T;
  cin>>N>>T;
  vector< vector<int> > peningur(T);
  int p,t;
  for(int i=0; i<N; i++){
    cin>>p>>t;
    peningur[t].push_back(p);
  }
  priority_queue<int> q;
  int svar=0;
  for(int i=T-1; i>=0; i--){
    for(int pen : peningur[i]){
      q.push(pen);
    }
    if(!q.empty()){
      svar+=q.top();
      q.pop();
    }
  }
  cout<<svar<<"\n";
}
