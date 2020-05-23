#include<iostream>
#include<math.h>
using namespace std;
double medal(double a, double b, double c, double d, double svar){
  double ma=max(a,max(b,max(c,max(d,svar))));
  double mi=min(a,min(b,min(c,min(d,svar))));
  return (a+b+c+d+svar-ma-mi)/3.0;
}
/*
int main(){
  double a,b,c,d;
  cin>>a>>b>>c>>d;
  double ma=max(a,max(b,max(c,d)));
  double mi=min(a,min(b,min(c,d)));
  double target;
  cin>>target;
  double svar=mi;
  double epsilon = 0.01;
  double med = medal(a,b,c,d,svar);
  while(abs(med-target)>=epsilon*0.1){
    if(svar>ma || svar<mi) break;
    if(med>target) svar-=epsilon;
    else if(med<target) svar+=epsilon;
    else break;
    med=medal(a,b,c,d,svar);
  }
  if(svar>ma && med<=target) cout<<"infinite\n";
  else if(svar<mi && med>target) cout<<"impossible\n";
  else if(svar<mi || ma<svar) cout<<"impossible\n";
  else printf("%.2f\n",svar);
}
*/
int main(){
  double a,b,c,d;
  cin>>a>>b>>c>>d;
  int x=100*a, y=100*b, z=100*c, w=100*d;
  int maximum = max(x,max(y,max(z,w)));
  int minimum = min(x,min(y,min(z,w)));
  double ma=max(a,max(b,max(c,d)));
  double mi=min(a,min(b,min(c,d)));
  double target;
  cin>>target;
  int t=100*target;
  /*
  if((a+b+c+d-ma)/3.0>target) printf("impossible\n");
  else if((a+b+c+d-mi)/3.0<=target) printf("infinite\n");
  else{
    double svar = 3*target-(a+b+c+d-ma-mi);
    printf("%.2f\n",svar);
  }
  */
  if((x+y+z+w-minimum)/3<=t) printf("infinite\n");
  else if((x+y+z+w-maximum)/3>t) printf("impossible\n");
  else{
    int svar = 3*t-(x+y+z+w-maximum-minimum);
    printf("%.2f\n",svar/100.0);
  }
}
