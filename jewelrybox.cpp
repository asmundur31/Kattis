#include<iostream>
#include<math.h>
int main(){
  int T;
  std::cin>>T;
  double X[T],Y[T];
  double a,b,h;
  for(int i=0; i<T; i++){
    std::cin>>X[i]>>Y[i];
    b=(X[i]-2*Y[i]-sqrt(4*(Y[i]-0.5*X[i])*(Y[i]-0.5*X[i])+3*Y[i]*(X[i]-Y[i])))/(-3);
    h=(Y[i]-b)/2;
    a=X[i]-Y[i]+b;
    printf("%.8f\n",a*b*h);
  }
}
