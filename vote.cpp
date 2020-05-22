#include<iostream>
using namespace std;
int main(){
  int T;
  cin>>T;
  for(int i=0; i<T; i++){
    int n;
    cin>>n;
    int sum=0;
    int v;
    int max=0;
    int index=0;
    bool enginn=false;
    for(int j=0; j<n; j++){
      cin>>v;
      sum+=v;
      if(v==max) enginn=true;
      else if(v>max){
        enginn=false;
        max=v;
        index=j+1;
      }
    }
    if(enginn) cout<<"no winner\n";
    else if(max*2<=sum) cout<<"minority winner "<<index<<"\n";
    else cout<<"majority winner "<<index<<"\n";
  }
}
