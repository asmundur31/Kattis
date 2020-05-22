#include<iostream>
int main(){
  int N=1,M=1;
  while(N!=0 && M!=0){
    std::cin>>N>>M;
    long jack[N],jill[M];
    for(int i=0; i<N; i++){
      std::cin>>jack[i];
    }
    for(int i=0; i<M; i++){
      std::cin>>jill[i];
    }
    int count=0;
    int k=0,l=0;
    while(k<N && l<M){
      if(jack[k]<jill[l]) k++;
      else if(jack[k]>jill[l]) l++;
      else{
        k++;
        l++;
        count++;
      }
    }
    if(N!=0 && M!=0) std::cout<<count<<"\n";
  }
}
