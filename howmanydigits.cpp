#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
  int n;
  while(cin>>n){
    if(n<2){
      cout<<1<<"\n";
    }
    else{
      cout<<setprecision(10)<<ceil(n*log10(n/exp(1))+log10(2*acos(-1)*n)/2.0)<<"\n";
    }
  }
}
