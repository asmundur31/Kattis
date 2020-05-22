#include<iostream>
#include<complex>
#include<vector>
using namespace std;
typedef complex<double> point;
typedef vector<point> polygon;
double flatarmal(polygon &p){
  double r=0.0;
  for(int i=0; i<p.size()-1; i++){
    r=r+real(p[i])*imag(p[i+1])-real(p[i+1])*imag(p[i]);
  }
  return 0.5*r;
}
int main(){
  int n;
  cin>>n;
  int im,re;
  double x,y;
  while(n!=0){
    polygon hyrn(n);
    for(int i=0; i<n; i++){
      cin>>re>>im;
      if(i==0){
        x=re;
        y=im;
      }
      hyrn.push_back(point (re,im));
    }
    hyrn.push_back(point (x,y));
    double area = flatarmal(hyrn);
    if(area>0) printf("CCW %.1f\n",fabs(area));
    else printf("CW %.1f\n",fabs(area));
    cin>>n;
  }
}
