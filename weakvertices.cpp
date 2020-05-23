#include<iostream>
#include<queue>
using namespace std;
int main(){
  int N;
  cin>>N;
  while(N!=-1){
    int bord[N][N];
    bool hnutar[N];
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
        cin>>bord[i][j];
      }
    }
    queue<int> q;
    queue<int> weak;
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
        if(bord[i][j]==1) q.push(j);
      }
      while(!q.empty()){
        if(bord[])
      }
    }
    while(!weak.empty()){
      cout<<weak.front()<<" ";
      weak.pop();
    }
    cout<<"\n";
    cin>>N;
  }
}
