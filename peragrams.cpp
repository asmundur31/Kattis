#include<iostream>
#include<map>
using namespace std;
int main(){
  map<char,int> f;
  string s;
  cin>>s;
  for(int i=0; i<s.length(); i++){
    if(f.find(s[i])==f.end()) f.insert(pair<char,int>(s[i],1));
    else {
      int g = f[s[i]];
      f.erase(s[i]);
      f.insert(pair<char,int>(s[i],g+1));
    }
  }
  map<char,int>::iterator i;
  int odda=0;
  for(i=f.begin(); i!=f.end(); i++){
    if(i->second%2==1) odda++;
  }
  if(odda==0) cout<<odda<<"\n";
  else cout<<odda-1<<"\n";
}
