#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  cin>>s;
  string svar="";
  for(int i=0; i<s.length(); i++){
    int j=1;
    svar+=s[i];
    while(s[i+j]==s[i]){
      i++;
    }
  }
  cout<<svar<<"\n";
}
