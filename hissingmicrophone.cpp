#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  cin>>s;
  char undan=s[0];
  for(int i=1; i<s.length(); i++){
    if(undan=='s' && s[i]=='s'){
      cout<<"hiss\n";
      s="kúkur";
    }
    undan=s[i];
  }
  if(s!="kúkur") cout<<"no hiss\n";
}
