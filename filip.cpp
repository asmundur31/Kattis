#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  string aut,but;
  for(int i=0; i<3; i++){
    aut+=to_string(a%10);
    a/=10;
    but+=to_string(b%10);
    b/=10;
  }
  if(stoi(aut)>stoi(but)) cout<<aut<<"\n";
  else cout<<but<<"\n";
}
