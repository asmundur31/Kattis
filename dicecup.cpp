#include<iostream>
using namespace std;
int main(){
  int n;
  int m;
  cin>>n>>m;
  int min,max;
  if(n<m){
    min=n;
    max=m;
  }
  else{
    min=m;
    max=n;
  }
  for(int i=min+1; i<max+2; i++) cout<<i<<"\n";
}
