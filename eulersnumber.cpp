#include<iostream>
#include<math.h>
long long int hrop(int n){
  long long int t=1;
  for(int i=1; i<=n; i++){
    t*=i;
  }
  return t;
}
int main(){
  int n;
  std::cin>>n;
  double sum=0;
  if(n>15) n=15;
  for(int i=0; i<=n; i++){
    sum+=1.0/hrop(i);
  }
  printf("%.12f\n",sum);
}
