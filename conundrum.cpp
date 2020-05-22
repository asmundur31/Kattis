#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  cin>>s;
  int count=s.length();
  for(int i=0; i<s.length(); i+=3){
    if(s[i]=='P') count--;
  }
  for(int i=1; i<s.length(); i+=3){
    if(s[i]=='E') count--;
  }
  for(int i=2; i<s.length(); i+=3){
    if(s[i]=='R') count--;
  }
  cout<<count<<"\n";
}
