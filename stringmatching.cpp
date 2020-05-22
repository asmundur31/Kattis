#include<iostream>
#include<string>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string s,p;
  while(getline(cin,p)){
    getline(cin,s);
    int i=s.find(p);
    while(i!=-1){
      cout<<i<<" ";
      i=s.find(p,i+1);
    }
    cout<<"\n";
  }
}
