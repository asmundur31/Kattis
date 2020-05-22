#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
  string s,t;
  cin>>s>>t;
  string svar1="",svar2="";
  for(int i=0; i<min(s.length(),t.length()); i++){
    if(s[s.length()-i-1]<t[t.length()-i-1]){
      svar2=t[t.length()-i-1]+svar2;
    }
    else if(s[s.length()-i-1]>t[t.length()-i-1]){
      svar1=s[s.length()-i-1]+svar1;
    }
    else{
      svar1=s[s.length()-i-1]+svar1;
      svar2=t[t.length()-i-1]+svar2;
    }
  }
  if(s.length()>t.length()){
    svar1=s.substr(0,s.length()-t.length())+svar1;
  }
  else if(s.length()<t.length()){
    svar2=t.substr(0,t.length()-s.length())+svar2;
  }
  if(svar1.length()==0) cout<<"YODA\n";
  else cout<<stoi(svar1)<<"\n";
  if(svar2.length()==0) cout<<"YODA\n";
  else cout<<stoi(svar2)<<"\n";
}
