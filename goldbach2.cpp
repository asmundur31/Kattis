#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
vector<bool> eratosthenes(ll n){
  vector<bool> res(n + 1, true);
  res[0] = res[1] = false;
  for(ll i = 2; i * i <= n; ++i) {
    if(res[i]) {
      for(ll j = i * i; j <= n; j += i) {
        res[j] = false;
      }
    }
  }
  return res;
}
int main(){
  int n;
  cin>>n;
  int tala;
  for(int i=0; i<n; i++){
    cin>>tala;
    vector<bool> primes = eratosthenes(tala);
    vector< pair<int,int> > svar;
    int fjoldi=0;
    for(int j=2; j<=tala/2; j++){
      if(primes[j] && primes[tala-j]){
        svar.push_back(make_pair(j,tala-j));
        fjoldi++;
      }
    }
    cout<<tala<<" has "<<fjoldi<<" representation(s)\n";
    for(int j=0; j<fjoldi; j++){
      cout<<svar[j].first<<"+"<<svar[j].second<<"\n";
    }
  }
}
