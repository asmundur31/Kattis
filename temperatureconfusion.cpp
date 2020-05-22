#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b){
  if(a==0) return b;
  if(b==0) return a;
  if(a==b) return a;
  if(a>b) return gcd(a-b,b);
  return gcd(a,b-a);
}
int main(){
  int a,b;
  cin>>a;
  char t;
  t=getchar();
  cin>>b;
  int ca=5*a-160*b;
  int cb=9*b;
  int d;
  if(ca<0 && cb<0) d=gcd(-ca,-cb);
  else if(ca<0) d=gcd(-ca,cb);
  else if(cb<0) d=gcd(ca,-cb);
  else d=gcd(ca,cb);
  ca/=d;
  cb/=d;
  cout<<ca<<"/"<<cb<<"\n";
}
