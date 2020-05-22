#include<iostream>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  if(m>n && m-n==1) cout<<"Dr. Chaz will have "<<m-n<<" piece of chicken left over!\n";
  else if(m>n) cout<<"Dr. Chaz will have "<<m-n<<" pieces of chicken left over!\n";
  else if(n>m && n-m==1) cout<<"Dr. Chaz needs "<<n-m<<" more piece of chicken!\n";
  else if(n>m) cout<<"Dr. Chaz needs "<<n-m<<" more pieces of chicken!\n";
}
