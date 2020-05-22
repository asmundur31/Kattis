#include<iostream>
using namespace std;
int main(){
  int N;
  cin>>N;
  int count=0;
  int t;
  for(int i=0; i<N; i++){
    cin>>t;
    if(t<0) count++;
  }
  cout<<count<<"\n";
}
