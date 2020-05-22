#include<iostream>
using namespace std;
int main(){
  int nh,nm,ns;
  int sh,sm,ss;
  char c;
  cin>>nh>>c;
  cin>>nm>>c;
  cin>>ns;
  cin>>sh>>c;
  cin>>sm>>c;
  cin>>ss;
  int nuna=60*60*nh+60*nm+ns;
  int sprengja=60*60*sh+60*sm+ss;
  int timi;
  if(nuna<sprengja) timi=sprengja-nuna;
  else timi=86400-nuna+sprengja;
  int h=timi/(60*60);
  timi-=h*60*60;
  int m=timi/60;
  timi-=m*60;
  int s=timi;
  if(h<10) cout<<"0"<<h<<":";
  else cout<<h<<":";
  if(m<10) cout<<"0"<<m<<":";
  else cout<<m<<":";
  if(s<10) cout<<"0"<<s<<"\n";
  else cout<<s<<"\n";
}
