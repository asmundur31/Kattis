#include<iostream>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  char bord[n][m];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>bord[i][j];
    }
  }
  int count=1;
  bool skipti=true;
  for(int j=0; j<m; j++){
    skipti=true;
    for(int i=0; i<n; i++){
      if(bord[i][j]!='_'){
        skipti=false;
        break;
      }
    }
    if(skipti) count++;
  }
  cout<<count<<"\n";
}
