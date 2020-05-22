#include<iostream>
using namespace std;
int mod = 1000000000;
void margf(long long f[4], long long a[4]){
  long long f0,f1,f2,f3;
  f0=((f[0]*a[0])%mod+(f[1]*a[2])%mod)%mod;
  f1=((f[0]*a[1])%mod+(f[1]*a[3])%mod)%mod;
  f2=((f[2]*a[0])%mod+(f[3]*a[2])%mod)%mod;
  f3=((f[2]*a[1])%mod+(f[3]*a[3])%mod)%mod;
  f[0]=f0;
  f[1]=f1;
  f[2]=f2;
  f[3]=f3;
}
void veldi(long long f[4], long long n){
  if(n==1 || n==0) return;
  long long a[]={1,1,1,0};
  veldi(f,n/2);
  margf(f,f);
  if(n%2==1) margf(f,a);
}
long long fib(long long n){
  long long f[]={1,1,1,0};
  veldi(f,n-1);
  return f[0];
}
int main(){
  int T;
  cin>>T;
  int numer;
  long long Y;
  for(int i=0; i<T; i++){
    cin>>numer>>Y;
    cout<<numer<<" "<<fib(Y)<<"\n";
  }
}
