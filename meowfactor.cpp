#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
typedef long long ll;
int main(){
  ll n;
  cin>>n;
  int tala;
  for(ll i=(ll)pow(n,1.0/9)+1; i>0; i--){
    if(n%(i*i*i*i*i*i*i*i*i)==0){
      tala=i;
      break;
    }
  }
  cout<<tala<<"\n";
}
