#include<iostream>
using namespace std;
int main(){
  int T;
  cin>>T;
  int n;
  for(int i=1; i<=T; i++){
    cin>>n;
    if(n%400==0) cout<<n/400<<"\n";
    else cout<<n/400+1<<"\n";
  }
}
