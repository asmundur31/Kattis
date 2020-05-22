#include<iostream>
using namespace std;
int thversumma(int n){
  int sum=0;
  while(n>0){
    sum+=n%10;
    n/=10;
  }
  return sum;
}
int main(){
  int lo,hi,x;
  cin>>lo>>hi>>x;
  int max,min;
  bool first=true;
  for(int i=lo; i<=hi; i++){
    if(thversumma(i)==x) max=i;
    if(first && thversumma(i)==x){
      first=false;
      min=i;
    }
  }
  cout<<min<<"\n";
  cout<<max<<"\n";
}
