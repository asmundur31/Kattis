#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a,b,c;
  for(int i=0; i<n; i++){
    cin>>a>>b>>c;
    if(a+b==c || a-b==c || b-a==c || a*b==c || ((double)a)/b==c || ((double)b)/a==c) cout<<"Possible\n";
    else cout<<"Impossible\n";
  }
}
