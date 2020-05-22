#include<iostream>
#include<math.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n,t;
  cin>>n>>t;
  int gildi[n];
  for(int i=0; i<n; i++){
    cin>>gildi[i];
  }
  int max=1;
  int lengd=1;
  int i=0,j=1;
  while(j<n){
    if(gildi[j]-gildi[i]<1000){
      j++;
      lengd++;
    }
    else{
      i++;
      lengd--;
    }
    if(max<lengd) max=lengd;
  }
  cout<<ceil(max/(1.0*t))<<"\n";
}
