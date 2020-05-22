#include<iostream>
#include<math.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  double r;
  int m,c;
  double pi = acos(-1);
  cin>>r>>m>>c;
  while(r+m+c!=0){
    cout<<r*r*pi<<" "<<4*c*r*r/m<<"\n";
    cin>>r>>m>>c;
  }
}
