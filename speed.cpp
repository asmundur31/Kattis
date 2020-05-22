#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main(){
  int n;
  int t;
  cin>>n>>t;
  double dist[n];
  double v[n];
  double min;
  for(int i=0; i<n; i++){
    cin>>dist[i]>>v[i];
    if(v[i]<min || i==0) min=v[i];
  }
  min=-min;
  double svar=0;
  double max=1001000;
  double mid=0;
  int count = 0;
  while(max-min>0.00000001){
    mid=(max+min)/2;
    svar=0;
    for(int i=0; i<n; i++) svar+=dist[i]/(v[i]+mid);
    if(svar<t) max=mid;
    else if(svar>t) min=mid;
    else break;
  }
  cout<<setprecision(10)<<(min+max)/2.0<<"\n";
}
