#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
  map<string,int> f;
  string s;
  getline(cin,s);
  while(s.compare("***")!=0){
    if(f.find(s)==f.end()) f.insert(pair<string,int>(s,1));
    else {
      int g = f[s];
      f.erase(s);
      f.insert(pair<string,int>(s,g+1));
    }
    getline(cin,s);
  }
  map<string,int>::iterator i;
  int max=0;
  string mest;
  bool jafnt=false;
  for(i=f.begin(); i!=f.end(); i++){
    if(i->second>max){
      max=i->second;
      mest=i->first;
      jafnt=false;
    }
    else if(i->second==max) jafnt=true;
  }
  if(jafnt) cout<<"Runoff!\n";
  else cout<<mest<<"\n";
}
