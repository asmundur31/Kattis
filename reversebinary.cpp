#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  string s="";
  while(n>0){
    s+=to_string(n%2);
    n/=2;
  }
  int svar=0;
  for(int i=0; i<s.length(); i++){
    svar+=(s[i]-'0')*pow(2,s.length()-i-1);
  }
  cout<<svar<<"\n";
}
