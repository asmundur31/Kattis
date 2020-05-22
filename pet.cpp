#include<iostream>
using namespace std;
int main(){
  int sum[5]={0,0,0,0,0};
  int max=0, k=0;
  for(int i=0; i<5; i++){
    for(int j=0; j<4; j++){
      int n;
      cin>>n;
      sum[i]+=n;
    }
    if(max<sum[i]){
      max=sum[i];
      k=i+1;
    }
  }
  cout<<k<<" "<<max<<"\n";
}
