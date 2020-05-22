#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int tala,t,nr;
  for(int i=1; i<=n; i++){
    cin>>nr>>tala;
    t=tala;
    int sum=0;
    int count=0;
    while(tala>0){
      if(tala%10>=8){
        sum=0;
        break;
      }
      sum+=(tala%10)*pow(8,count);
      count++;
      tala/=10;
    }
    cout<<i<<" "<<sum<<" "<<t<<" ";
    sum=0;
    count=0;
    while(t>0){
      sum+=(t%10)*pow(16,count);
      count++;
      t/=10;
    }
    cout<<sum<<"\n";
  }
}
