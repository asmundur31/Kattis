#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  map<string,string> f;
  string s;
  string u,v;
  getline(cin,s);
  while(s!=""){
    u=s.substr(0, s.find(" "));
    v=s.substr(s.find(" ")+1, s.length());
    if(f.find(v)==f.end()) f.insert(pair<string,string>(v,u));
    getline(cin,s);
  }
  getline(cin,s);
  while(s!=""){
    if(f.find(s)!=f.end()) cout<<f[s]<<"\n";
    else cout<<"eh\n";
    getline(cin,s);
  }
}
