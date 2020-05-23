#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
int fjoldiNull(ll n, int k){
  ll tala=n;
  string svar="";
  while(tala>0){
    svar+=tala%k;
    tala/=k;
  }
  char t = '0';
  int i=0;
  cout<<"strengur: "<<svar<<endl;
  while(t=='0') t=svar[svar.length()-1-i];
  return i;
}
int main(){
  ll n;
  cin>>n;
  string svar="";
  while(n>0){
    svar=svar+(n%2);
    n/=2;
    cout<<n<<endl;
    cout<<n%2<<endl;
    cout<<svar<<endl;
  }
  cout<<svar<<endl;
  //for(int i=2; i<10; i++) cout<<fjoldiNull(n,i)<<endl;
}
