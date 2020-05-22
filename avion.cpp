#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  bool prenta=false;
  for(int i=0; i<5; i++){
    cin>>s;
    for(int j=0; j<s.length(); j++){
      if(s.substr(j,3).compare("FBI")==0){
        if(!prenta) cout<<i+1;
        else cout<<" "<<i+1;
        prenta=true;
        break;
      }
    }
  }
  if(!prenta) cout<<"HE GOT AWAY!\n";
  else cout<<"\n";
}
