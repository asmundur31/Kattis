#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  int n,k;
  int lengd;
  int fjoldi2;
  while(T--){
    cin>>n;
    k=n;
    fjoldi2=0;
    lengd=ceil(n*log10(11));
    while(lengd!=n && n!=1){
      fjoldi2++;
      k--;
      lengd=ceil(k*log10(11)+fjoldi2*log10(2));
    }
    if(n==1) cout<<"2\n";
    else{
      for(int i=0; i<fjoldi2; i++) cout<<"2 ";
      for(int i=0; i<n-fjoldi2-1; i++) cout<<"11 ";
      cout<<"11\n";
    }
  }
}
