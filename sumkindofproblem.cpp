#include<iostream>
using namespace std;
int main(){
  int T;
  cin>>T;
  int s;
  int n;
  for(int i=1; i<=T; i++){
    cin>>s>>n;
    cout<<i<<" ";
    cout<<n*(n+1)/2<<" ";
    cout<<n*n<<" ";
    cout<<n*(n+1)<<"\n";
  }
}
