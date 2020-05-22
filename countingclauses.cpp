#include<iostream>
using namespace std;
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int m,n;
  int t;
  cin>>m>>n;
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cin>>t;
    }
  }
  if(m<8) cout<<"unsatisfactory\n";
  else cout<<"satisfactory\n";
}
