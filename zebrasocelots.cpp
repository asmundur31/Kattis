#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  string s = "";
  for(int i=0; i<n; i++) {
    char c;
    cin>>c;
    if(c=='O') s+='1';
    else s+='0';
  }
  long long sum = 0;
  for(int i=0; i<s.length(); i++) {
    if(s[s.length()-1-i]=='1') {
      long long veldi = pow(2,i);
      sum = sum + veldi;
    }
  }
  printf("%lld\n",sum);
}