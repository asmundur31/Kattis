#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0; i<n; i++) cin>>v[i];
  sort(v.begin(),v.end());
  int i=0;
  int b;
  int e=0;
  while(i<n){
    b=i;
    e=i;
    while(v[i]+1==v[i+1] && i<n-1){
      i++;
      e=i;
    }
    if(e-b>1){
      cout<<v[b]<<"-"<<v[e]<<" ";
    }
    else if(e-b==1){
      cout<<v[b]<<" "<<v[e]<<" ";
    }
    else cout<<v[b]<<" ";
    i++;
  }
  cout<<"\n";
}
