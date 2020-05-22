#include<iostream>
int main(){
  int n;
  std::cin>>n;
  int summa=1;
  for(int i=0; i<n; i++) summa*=2;
  std::cout<<summa-n-1<<"\n";
}
