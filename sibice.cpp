#include<iostream>
using namespace std;
int main(){
  int n,w,h;
  cin>>n>>w>>h;
  int len;
  for(int i=0; i<n; i++){
    cin>>len;
    if(len*len<=w*w+h*h) cout<<"DA\n";
    else cout<<"NE\n";
  }
}
