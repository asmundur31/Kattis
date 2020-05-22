#include<iostream>
using namespace std;
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int T,n,t,s,r;
  cin>>T;
  for(int i=0; i<T; i++){
    cin>>n;
    cin>>t;
    for(int j=0; j<t; j++){
      cin>>s;
      cin>>r;
    }
    cout<<(n-1)<<"\n";
  }
}
