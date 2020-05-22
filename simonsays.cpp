#include<iostream>
#include<string>
using namespace std;
int main(){
  int T;
  cin>>T;
  string s;
  getline(cin,s);
  for(int i=0; i<T; i++){
     getline(cin,s);
     if(s.length()>10 && s.substr(0,10)=="Simon says"){
       cout<<s.substr(11,s.length()-10)<<"\n";
     }
  }
}
