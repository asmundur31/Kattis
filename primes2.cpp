#include<iostream>
#include<string>
#include<math.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {
  return b == 0 ? a : gcd(b, a % b);
}
bool isprime(ll n) {
  if(n < 2) return false;
  if(n == 2 || n == 3) return true;
  if(n % 2 == 0 || n % 3 == 0) return false;
  for(ll i = 5; i * i <= n; i += 6) {
    if(n % i == 0) return false;
    if(n % (i + 2) == 0) return false;
  }
  return true;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin>>T;
  string s;
  ll b=0,o=0,d=0,h=0;
  bool bi=true,oc=true,de=true,he=true;
  int t=0,n=4;
  while(T--){
    cin>>s;
    b=0,o=0,d=0,h=0;
    t=0,n=4;
    bi=true,oc=true,de=true,he=true;
    for(int i=0; i<s.length(); i++){
      if(s[i]-'0'>1 && bi){
        bi=false;
        n--;
      }
      else if(bi){
        b+=(s[i]-'0')*pow(2,s.length()-i-1);
      }
      if(s[i]-'0'>7 && oc){
        oc=false;
        n--;
      }
      else if(oc){
        o+=(s[i]-'0')*pow(8,s.length()-i-1);
      }
      if(s[i]-'0'>9 && de){
        de=false;
        n--;
      }
      else if(de){
        d+=(s[i]-'0')*pow(10,s.length()-i-1);
      }
      if(s[i]-'0'>9) h+=(s[i]-'0'-7)*pow(16,s.length()-i-1);
      else h+=(s[i]-'0')*pow(16,s.length()-i-1);
    }
    if(isprime(b) && bi) t++;
    if(isprime(o) && oc) t++;
    if(isprime(d) && de) t++;
    if(isprime(h) && he) t++;
    ll d=gcd(t,n);
    cout<<t/d<<"/"<<n/d<<"\n";
    }
}
