#include<iostream>
#include<string>
#include<sstream>
#include<complex>
#include<vector>
#include<algorithm>
using namespace std;
typedef complex<double> point;
typedef vector<point> polygon;
double EPS=1E-9;
point piv;
bool cmp(point a, point b){
  return fabs(arg(a-piv)-arg(b-piv))<EPS ? abs(a-piv)<abs(b-piv) : arg(a-piv)<arg(b-piv);
}
int ccw(point a, point b, point c){
  if(fabs(real(b-a)*imag(c-a)-imag(b-a)*real(c-a))<EPS) return 0;
  return real(b-a)*imag(c-a)-imag(b-a)*real(c-a)>0.0 ? 1:-1;
}
polygon convex_hull(vector<point> p){
  polygon h;
  int j,i,mn=0;
  for(i=1; i<p.size(); i++)
    if(imag(p[i])<imag(p[mn]) || imag(p[i])==imag(p[mn]) && real(p[i])<imag(p[mn]))
      mn=i;
  swap(p[mn],p[0]);
  piv=p[0];
  sort(p.begin()+1,p.end(),cmp);
  h.push_back(p[p.size()-1]);
  h.push_back(p[0]);
  h.push_back(p[1]);
  i=2;
  while(i<p.size()){
    j=h.size()-1;
    if(ccw(h[j-1],h[j],p[i])==1) h.push_back(p[i++]);
    else h.pop_back();
  }
  return h;
}
double ummal(polygon p){
  double r=0.0;
  for(int i=0; i<p.size()-1; i++){
    r+=abs(p[i]-p[i+1]);
  }
  return r;
}
int main(){
  string s;
  double x,y;
  int len;
  bool lina;
  double maxX,maxY,minX,minY;
  double umal;
  while(getline(cin,s)){
    stringstream ss(s);
    polygon hyrn;
    lina=true;
    maxX=-40;
    maxY=-40;
    minX=40;
    minY=40;
    len=0;
    while(ss>>x){
      ss>>y;
      hyrn.push_back(point(x,y));
      len++;
    }
    for(int i=0; i<len; i++){
      if(i<len-2 && ccw(hyrn[i],hyrn[i+1],hyrn[i+2])!=0){
        lina=false;
      }
      if(real(hyrn[i])>maxX) maxX=real(hyrn[i]);
      if(real(hyrn[i])<minX) minX=real(hyrn[i]);
      if(imag(hyrn[i])>maxY) maxY=imag(hyrn[i]);
      if(imag(hyrn[i])<minY) minY=imag(hyrn[i]);
    }
    if(lina) umal=2*sqrt((maxX-minX)*(maxX-minX)+(maxY-minY)*(maxY-minY));
    else umal=ummal(convex_hull(hyrn));
    double stig = 100.0*len/(1+umal);
    printf("%.6f\n",stig);
  }
}
