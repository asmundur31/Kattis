#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
  string s;
  cin>>s;
  if(s[s.length()-1]=='U' && s[s.length()-2]=='D' && s[s.length()-3]=='U'
  || s[s.length()-1]=='D' && s[s.length()-2]=='U' && s[s.length()-3]=='D'
  || s[s.length()-1]=='R' && s[s.length()-2]=='L' && s[s.length()-3]=='R'
  || s[s.length()-1]=='L' && s[s.length()-2]=='R' && s[s.length()-3]=='L'){
    cout<<"impossible\n";
    return 0;
  }
  vector< pair<int,int> > veggir;
  int maxx=0, minx=0, maxy=0, miny=0;
  int boltix=0, boltiy=0;
  for(int i=s.length()-1; i>0; i--){
    if(s[i]=='U' && s[i-1]=='R'){
      boltiy=miny-1;
      miny-=1;
      veggir.push_back(make_pair(boltix+1,boltiy));
    }
    else if(s[i]=='U' && s[i-1]=='D'){
      if(i==s.length()-1){
        boltiy=miny-2;
        miny-=2;
        veggir.push_back(make_pair(boltix,boltiy-1));
      }
      else{
        boltiy=miny-1;
        miny-=1;
        veggir.push_back(make_pair(boltix,boltiy-1));
      }
    }
  }
}
