#include<iostream>
using namespace std;
int main(){
  int a1,b1,a2,b2;
  cin>>a1>>b1>>a2>>b2;
  double gunnar=(a1+b1)/2.0+(a2+b2)/2.0;
  cin>>a1>>b1>>a2>>b2;
  double emma=(a1+b1)/2.0+(a2+b2)/2.0;
  if(emma<gunnar) cout<<"Gunnar\n";
  else if(emma>gunnar) cout<<"Emma\n";
  else cout<<"Tie\n";
}
