#include<iostream>
using namespace std;
int main(){
  int n,s,t;
  cin>>n;
  while(n!=-1){
    int sum=0;
    int undan=0;
    for(int i=0; i<n; i++){
      cin>>s>>t;
      sum+=s*(t-undan);
      undan=t;
    }
    cout<<sum<<" miles\n";
    cin>>n;
  }
}
