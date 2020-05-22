#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
  int T;
  cin>>T;
  int n;
  string s;
  for(int i=0; i<T; i++){
    cin>>n;
    map<string,int> map;
    for(int j=0; j<n; j++){
      cin>>s;
      if(map.find(s)!=map.end()){
        map[s]++;
      }
      else{
        map.insert(pair<string,int>(s,1));
      }
    }
    cout<<map.size()<<"\n";
  }
}
