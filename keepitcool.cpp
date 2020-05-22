#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int n,m,s,d;
  cin >> n >> m >> s >> d;
  vector< pair<int,int> > holf(s);
  int kaldar=0;
  for(int i=0; i<s; i++){
    cin>>holf[i].first;
    holf[i].second=i;
    kaldar+=holf[i].first;
  }
  sort(holf.begin(), holf.begin()+s);
  vector<int> svar(s);
  int eydileggjast=0;
  int i=0;
  while(n>0){
    if(holf[i].first<d && n>=(d-holf[i].first)){
      svar[holf[i].second]=d-holf[i].first;
      n-=d-holf[i].first;
      if(holf[i].first>0) eydileggjast+=holf[i].first;
    }
    else if(holf[i].first<d){
      svar[holf[i].second]=n;
      n-=n;
      if(holf[i].first>0) eydileggjast+=holf[i].first;
    }
    i++;
  }
  if(kaldar-eydileggjast<m) cout<<"impossible\n";
  else{
    for(int i=0; i<s-1; i++){
      cout<<svar[i]<<" ";
    }
    cout<< svar[s-1]<<"\n";
  }
}
