#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int h,v;
  cin>>h>>v;
  double x = h/sin(M_PI*v/180);
  printf("%.f\n",ceil(x));
}
