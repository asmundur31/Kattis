#include<iostream>
#include<string>
using namespace std;
int main(){
  char svar='A';
  string s;
  cin>>s;
  int i=0;
  while(i!=s.length()){
    if(s[i]=='A'){
      if(svar=='A') svar='B';
      else if(svar=='B') svar='A';
    }
    else if(s[i]=='B'){
      if(svar=='B') svar='C';
      else if(svar=='C') svar='B';
    }
    else{
      if(svar=='A') svar='C';
      else if(svar=='C') svar='A';
    }
    i++;
  }
  cout<<svar-'@'<<"\n";
}
