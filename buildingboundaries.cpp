#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
pair<long long,long long> snua (pair<long long,long long> par){
  pair<long long,long long> p;
  p.first=par.second;
  p.second=par.first;
  return p;
}
long long flatarmal(pair<long long,long long> a, pair<long long,long long> b, pair<long long,long long> c){
  long long min=4000000000000000000;
  long long t;
  long long s;
  //000
  s=(a.second+b.second+c.second)*max(a.first,max(b.first,c.first));
  t=max((a.second+b.second),(a.second+c.second))*max(a.first,(b.first+c.first));
  if(t<min) min=t;
  if(s<min) min=s;
  //100
  a=snua(a);
  s=(a.second+b.second+c.second)*max(a.first,max(b.first,c.first));
  t=max((a.second+b.second),(a.second+c.second))*max(a.first,(b.first+c.first));
  if(t<min) min=t;
  if(s<min) min=s;
  //110
  b=snua(b);
  s=(a.second+b.second+c.second)*max(a.first,max(b.first,c.first));
  t=max((a.second+b.second),(a.second+c.second))*max(a.first,(b.first+c.first));
  if(t<min) min=t;
  if(s<min) min=s;
  //010
  a=snua(a);
  s=(a.second+b.second+c.second)*max(a.first,max(b.first,c.first));
  t=max((a.second+b.second),(a.second+c.second))*max(a.first,(b.first+c.first));
  if(t<min) min=t;
  if(s<min) min=s;
  //011
  c=snua(c);
  s=(a.second+b.second+c.second)*max(a.first,max(b.first,c.first));
  t=max((a.second+b.second),(a.second+c.second))*max(a.first,(b.first+c.first));
  if(t<min) min=t;
  if(s<min) min=s;
  //111
  a=snua(a);
  s=(a.second+b.second+c.second)*max(a.first,max(b.first,c.first));
  t=max((a.second+b.second),(a.second+c.second))*max(a.first,(b.first+c.first));
  if(t<min) min=t;
  if(s<min) min=s;
  //101
  b=snua(b);
  s=(a.second+b.second+c.second)*max(a.first,max(b.first,c.first));
  t=max((a.second+b.second),(a.second+c.second))*max(a.first,(b.first+c.first));
  if(t<min) min=t;
  if(s<min) min=s;
  //001
  a=snua(a);
  s=(a.second+b.second+c.second)*max(a.first,max(b.first,c.first));
  t=max((a.second+b.second),open(a.second+c.second))*max(a.first,(b.first+c.first));
  if(t<min) min=t;
  if(s<min) min=s;
  return min;
}
int main(){
  int n;
  cin>>n;
  pair<long long,long long> a;
  pair<long long,long long> b;
  pair<long long,long long> c;
  long long min;
  long long t;
  for(int i=0; i<n; i++){
    min=4000000000000000000;
    cin>>a.first>>a.second>>b.first>>b.second>>c.first>>c.second;
    t=flatarmal(a,b,c);
    if(t<min) min =t;
    t=flatarmal(a,c,b);
    if(t<min) min =t;
    t=flatarmal(b,a,c);
    if(t<min) min =t;
    t=flatarmal(b,c,a);
    if(t<min) min =t;
    t=flatarmal(c,a,b);
    if(t<min) min =t;
    t=flatarmal(c,b,a);
    if(t<min) min =t;
    cout<<min<<"\n";
  }
}
