#include<iostream>
int main(){
  int T;
  std::cin>>T;
  for(int i=0; i<T; i++){
    int n;
    std::cin>>n;
    int dvd[n];
    for(int j=0; j<n; j++){
      std::cin>>dvd[j];
    }
    int k=1;
    int fjoldi=0;
    for(int j=0; j<n; j++){
      if(dvd[j]==k) k++;
      else fjoldi++;
    }
    std::cout<<fjoldi<<"\n";
  }
}
