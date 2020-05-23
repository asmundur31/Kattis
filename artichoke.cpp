#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
double price(double k, double p, double a, double b, double c, double d){
  k=fmod(k,2*acos(-1));
  double s=fmod(a*k+b,2*acos(-1));
  double co=fmod(c*k+d,2*acos(-1));
  return p*(sin(s)+cos(co)+2);
}
int main(){
  double p,a,b,c,d,n;
  cin>>p>>a>>b>>c>>d>>n;
  double hi=price(1,p,a,b,c,d);
  double lo=p*4;
  double max=0;
  for(int i=2; i<=n; i++){
    double pr=price(i,p,a,b,c,d);
    if(hi<pr){
      hi=pr;
      lo=pr;
    }
    if(lo>pr) lo=pr;
    if(max<hi-lo) max=hi-lo;
  }
  printf("%.7f\n",max);
}
