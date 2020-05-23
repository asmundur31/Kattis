#include<iostream>
using namespace std;
int fjoldifrum(int n){
  if(n==1) return 1;
  for(int i=2; i*i<=n; i++){
    if(n%i==0){
      return 1+fjoldifrum(n/i);
    }
  }
  return 1;
}
int main(){
  int n;
  cin>>n;
  int svar=fjoldifrum(n);
  cout<<svar<<"\n";
}
