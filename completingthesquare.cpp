#include<iostream>
using namespace std;
int main(){
  int x[3];
  int y[3];
  for(int i=0; i<3; i++) cin>>x[i]>>y[i];
  int x0=x[0]-x[1];
  int x1=x[0]-x[2];
  int x2=x[1]-x[2];
  int y0=y[0]-y[1];
  int y1=y[0]-y[2];
  int y2=y[1]-y[2];
  if(x0*x1+y0*y1==0) cout<<x[1]-x1<<" "<<y[1]-y1<<"\n";
  else if(x0*x2+y0*y2==0) cout<<x[2]+x0<<" "<<y[2]+y0<<"\n";
  else if(x1*x2+y1*y2==0) cout<<x[1]+x1<<" "<<y[1]+y1<<"\n";
}
