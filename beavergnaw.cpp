#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
  double D,V;
  cin>>D>>V;
  double svar;
  while(D+V!=0){
    cout<<setprecision(9)<<pow(D*D*D-6*V/M_PI,1.0/3)<<"\n";
    cin>>D>>V;
  }
}
