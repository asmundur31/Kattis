#include<iostream>
#include<math.h>
using namespace std;

int main(){
  double a,b,c,d;
  cin>>a>>b>>c>>d;
  double ma=max(a,max(b,max(c,d)));
  double mi=min(a,min(b,min(c,d)));
  double target;
  cin>>target;
  // Athugum ef 5 timinn er stærri eða jafn max
  if((a+b+c+d-mi)/3.0 - 1e-9<=target) printf("infinite\n");
  // Athugum ef 5 timinn er minni eða jafn min
  else if((a+b+c+d-ma)/3.0 - 1e-9>target) printf("impossible\n");
  // Athugum ef 5 timinn er milli max og min
  else {
    printf("%.2f\n",3*target-a-b-c-d+ma+mi);
  }
}
