#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
  int n;
  int adgerd,tala;
  while(cin>>n){
    bool qu=true,pqu=true,st=true;
    queue<int> q;
    priority_queue<int> pq;
    stack<int> s;
    int einn=0,tveir=0;
    for(int i=0; i<n; i++){
      cin>>adgerd>>tala;
      if(adgerd==1){
        einn++;
        q.push(tala);
        pq.push(tala);
        s.push(tala);
      }
      else if(!q.empty() && !pq.empty() && !s.empty()){
        tveir++;
        if(q.front()!=tala && qu) qu=false;
        else if(qu) q.pop();
        if(pq.top()!=tala && pqu) pqu=false;
        else if(pqu) pq.pop();
        if(s.top()!=tala && st) st=false;
        else if(st) s.pop();
      }
      else tveir++;
    }
    if(tveir>einn) cout<<"impossible\n";
    else if(qu && pqu && st) cout<<"not sure\n";
    else if((qu && pqu) || (qu && st) || (pqu && st)) cout<<"not sure\n";
    else if(qu) cout<<"queue\n";
    else if(pqu) cout<<"priority queue\n";
    else if(st) cout<<"stack\n";
    else cout<<"impossible\n";
  }
}
