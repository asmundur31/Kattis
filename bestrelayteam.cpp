#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
typedef pair<double,double> dd;
int main(){
  int n;
  cin>>n;
  map<string,dd> map;
  vector< pair<double,string> > sum(n);
  vector< pair<double,string> > diff(n);
  string nafn;
  dd par;
  for(int i=0; i<n; i++){
    cin>>nafn;
    cin>>par.first>>par.second;
    map[nafn]=par;
    sum[i]=make_pair(par.first+par.second,nafn);
    diff[i]=make_pair(abs(par.first-par.second),nafn);
  }
  sort(sum.begin(), sum.begin()+n);
  sort(diff.begin(), diff.begin()+n);
  double summa = 0;
  for(int i=0; i<4; i++) summa+=map[sum[i].second].second;
  double min = 100;
  int index = 0;
  for(int i=0; i<4; i++){
    summa-=map[sum[i].second].second;
    summa+=map[sum[i].second].first;
    if(min>summa){
      min = summa;
      index = i;
    }
    summa+=map[sum[i].second].second;
    summa-=map[sum[i].second].first;
  }
  printf("%.10f\n",min);
  printf("%s\n", sum[index].second.c_str());
  for(int i=0; i<4; i++){
    if(i==index) continue;
    else{
      printf("%s\n", sum[i].second.c_str());
    }
  }
}
