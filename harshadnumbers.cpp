#include<iostream>
using namespace std;
int thversumma(int n){
  int summa=0;
  while(n>0){
    summa+=n%10;
    n/=10;
  }
  return summa;
}
int main(){
  int n;
  cin>>n;
  int j=0;
  for(int i=n; i<2*n; i++){
    if((n+j)%thversumma(n+j)==0){
      cout<<n+j<<"\n";
      break;
    }
    j++;
  }
}
