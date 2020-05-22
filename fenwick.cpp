#include<iostream>
using namespace std;
#define LSB(i) ((i) & -(i))
long long a[5000000];
void add(int i, int k, int n){
  while(i<n){
    if(i==0){
      a[i]=a[i]+k;
      i=1;
    }
    else{
      a[i]=a[i]+k;
      i=i+LSB(i);
    }
  }
}
long long sum(int i){
  long long sum=0;
  while(i>0){
    sum=sum+a[i];
    i=i-LSB(i);
  }
  return sum;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int N,Q;
  cin>>N>>Q;
  char adgerd;
  long long index,delta;
  long long summa = 0;
  for(int i=0; i<N; i++) a[i]=0;
  for(int i=0; i<Q; i++){
    cin>>adgerd;
    if(adgerd=='+'){
      cin>>index>>delta;
      add(index,delta,N);
    }
    else{
      cin>>index;
      if(index==1) cout<<a[0]<<"\n";
      else{
        summa=sum(index-1);
        cout<<summa<<"\n";
      }
    }
  }
}
