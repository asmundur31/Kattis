#include<iostream>
using namespace std;
long long f[10001];
int main(){
  f[0]=0;
  f[1]=2;
  f[2]=3;
  for(int i=3; i<=10000; i++){
    f[i]=(f[i-1]%1000000007+f[i-2]%1000000007)%1000000007;
  }
  int T;
  cin>>T;
  int n;
  while(T--){
    cin>>n;
    cout<<f[n]<<"\n";
  }
}
