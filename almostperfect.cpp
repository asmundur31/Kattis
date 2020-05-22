#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
vector<ll> deilar(ll n) {
  vector<ll> d;
  for(int i=1; i*i<n+1; i++){
    if(n%i==0){
      d.push_back(i);
      if(i*i!=n) d.push_back(n/i);
    }
  }
  return d;
}
int main(){
  ll N;
  vector<ll> d;
  ll sum;
  while(cin>>N){
    d=deilar(N);
    sum = -N;
    for(int i=0; i<d.size(); i++){
      sum+=d[i];
    }
    if(sum==N) cout<<N<<" perfect\n";
    else if(abs(sum-N)<3) cout<<N<<" almost perfect\n";
    else cout<<N<<" not perfect\n";
  }
}
