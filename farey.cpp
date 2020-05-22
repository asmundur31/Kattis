#include<iostream>
#include<algorithm>
using namespace std;
int t[10001];
int totient(int n){
  int sum=n;
  for(int p=2; p*p<=n; ++p) {
    if(n%p==0) {
      while(n%p==0)
        n/=p;
        sum-=sum/p;
      }
    }
    if(n>1)
      sum-=sum/n;
    return sum;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin>>T;
  int numer;
  int n;
  int sum=0;
  for(int i=1; i<=10000; i++){
    t[i]=sum+totient(i);
    sum=t[i];
  }
  for(int i=0; i<T; i++){
    cin>>numer>>n;
    cout<<numer<<" "<<1+t[n]<<"\n";
  }
}
