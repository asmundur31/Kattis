#include <iostream>
long int combin(int N){
  long int summa=N*(N-1)*(N-2)*(N-3);
  return summa/(4*3*2);
}
int main(){
  int N;
  std::cin>>N;
  std::cout<< combin(N)<<"\n";
  return 0;
}
