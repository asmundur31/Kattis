#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n!=0){
    cout<<n*(n-1)*(n-2)/6<<"\n";
    cin>>n;
  }
}