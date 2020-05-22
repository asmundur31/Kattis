#include<iostream>
using namespace std;
int main(){
  long long n;
  cin>>n;
  if((n-2018)%13==0 || (n-2018)%13==2 || (n-2018)%13==4 || (n-2018)%13==6 || (n-2018)%13==8 || (n-2018)%13==11) cout<<"yes\n";
  else cout<<"no\n";
}
