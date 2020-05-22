#include<iostream>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  if(a*b>0){
    if(a<0) cout<<"3\n";
    else cout<<"1\n";
  }
  else{
    if(a<0) cout<<"2\n";
    else cout<<"4\n";
  }
}
