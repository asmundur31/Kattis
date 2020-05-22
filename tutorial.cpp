#include<iostream>
#include<math.h>
using namespace std;
long fact(int n, int m){
  long sum=1;
  for(int i=1; i<=n; i++){
    sum*=i;
    if(sum>m) return 1;
  }
  return 0;
}
long tveirIn(int n, int m){
  long sum=1;
  for(int i=1; i<=n; i++){
    sum*=2;
    if(sum>m) return 1;
  }
  return 0;
}
long nI4(int n, int m){
  long sum=1;
  for(int i=1; i<=4; i++){
    sum*=n;
    if(sum>m) return 1;
  }
  return 0;
}
long nI3(int n, int m){
  long sum=1;
  for(int i=1; i<=3; i++){
    sum*=n;
    if(sum>m) return 1;
  }
  return 0;
}
long nI2(int n, int m){
  long sum=1;
  for(int i=1; i<=2; i++){
    sum*=n;
    if(sum>m) return 1;
  }
  return 0;
}
long nlog2n(int n, int m){
  long double sum=n;
  if(sum>m) return 1;
  sum*=log2(n);
  if(sum>m) return 1;
  return 0;
}
long nI1(int n, int m){
  if(n>m) return 1;
  return 0;
}
int main(){
  long m,n,t;
  cin>>m>>n>>t;
  if(t==1){
    if(fact(n,m)==1) cout<<"TLE\n";
    else cout<<"AC\n";
  }
  else if(t==2){
    if(tveirIn(n,m)==1) cout<<"TLE\n";
    else cout<<"AC\n";
  }
  else if(t==3){
    if(nI4(n,m)==1) cout<<"TLE\n";
    else cout<<"AC\n";
  }
  else if(t==4){
    if(nI3(n,m)==1) cout<<"TLE\n";
    else cout<<"AC\n";
  }
  else if(t==5){
    if(nI2(n,m)==1) cout<<"TLE\n";
    else cout<<"AC\n";
  }
  else if(t==6){
    if(nlog2n(n,m)==1) cout<<"TLE\n";
    else cout<<"AC\n";
  }
  else if(t==7){
    if(nI1(n,m)==1) cout<<"TLE\n";
    else cout<<"AC\n";
  }
}
