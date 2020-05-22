#include<iostream>
#include<vector>
using namespace std;
int main(){
  int N;
  cin>>N;
  vector<int> ut;
  int count=0;
  int i=1;
  while(i<=N){
    ut.push_back(i);
    count++;
    i*=2;
  }
  cout<<count<<"\n";
  for(int j=0; j<ut.size(); j++){
    cout<<ut[j]<<" ";
  }
  cout<<"\n";
}
