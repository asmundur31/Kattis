#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int R,C;
  cin>>R>>C;
  double svar = (R-C)*(R-C)/(1.0*R*R)*100;
  cout<<setprecision(10)<<svar<<"\n";
}
