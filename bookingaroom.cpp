#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,tekin;
  cin>>n>>tekin;
  vector<bool> tekid(n+1,false);
  int herbergi;
  for(int i=0; i<tekin; i++){
    cin>>herbergi;
    tekid[herbergi]=true;
  }
  int laust=1;
  if(tekin==n) cout<<"too late\n";
  else{
    while(tekid[laust]) laust++;
    cout<<laust<<"\n";
  }
}
