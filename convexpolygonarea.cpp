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
  return fabs(0.5*r);
}
int main(){
  int n;
  cin>>n;
  int im,re;
  double x,y;
  int s;
  for(int i=0; i<n; i++){
    cin>>s;
    polygon hyrn(s);
    for(int i=0; i<s; i++){
      cin>>re>>im;
      if(i==0){
        x=re;
        y=im;
      }
      hyrn.push_back(point (re,im));
    }
    hyrn.push_back(point (x,y));
    double area = flatarmal(hyrn);
    cout<<area<<"\n";
  }
}
