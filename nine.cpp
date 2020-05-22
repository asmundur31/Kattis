#include<iostream>
#include<cmath>
int main(){
  int T;
  std::cin>>T;
  for(int i=0; i<T; i++){
    long long int d;
    std::cin>>d;
    d%=500000003;
    d--;
    long int n=1000000007;
    long long int afg=1;
    long long int summa=1;
    while(d>0){
      long long int rep=floor(log2(d));
      afg = 9;
      for(int j=0; j<rep; j++){
        afg=(afg*afg)%n;
      }
      summa=(summa*afg)%n;
      d-=pow(2,rep);
    }
    summa=(summa*8)%n;
    /*
    long long int summa=8;
    long long int afg=8;
    if(d==0)afg=888888896;
    for(int j=0; j<d; j++){
      summa=afg*9;
      afg=summa%n;
    }*/
    printf("%lld\n",summa);
  }
}
