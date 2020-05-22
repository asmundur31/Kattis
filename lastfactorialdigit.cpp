#include <iostream>

int main(){
  int T,N;
  int tala=1;
  std::cin>>T;
  for(int i=0; i<T; i++){
    std::cin>>N;
    if(N<5){
      for(int j=1; j<=N; j++)
        tala*=j;
      std::cout<<tala%10<<"\n";
    }
    else
    std::cout<<0<<"\n";
    tala=1;
  }
  return 0;
}
