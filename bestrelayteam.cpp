#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

typedef pair<double,double> dd;

int compareF(pair<string,dd> a, pair<string,dd> b) {
  if(a.second.first!=b.second.first) {
    return a.second.first<b.second.first;
  } else if(a.second.second!=b.second.second) {
    return a.second.second<b.second.second;
  } else {
    return a.first.compare(b.first)==0;
  }
}

int compareS(pair<string,dd> a, pair<string,dd> b) {
  if(a.second.second!=b.second.second) {
    return a.second.second<b.second.second;
  } else if(a.second.first!=b.second.first) {
    return a.second.first<b.second.first;
  } else {
    return a.first.compare(b.first)==0;
  }
}

vector< pair<string,dd> > add(vector< pair<string,dd> > best, pair<string,dd> nyr) {
  double min = 10000;
  int indexF = 0;
  double gildi = best[0].second.first+best[1].second.second+best[2].second.second+best[3].second.second;
  if(gildi<min) {
    min = gildi;
    indexF=0;
  }
  gildi = best[0].second.second+best[1].second.first+best[2].second.second+best[3].second.second;
  if(gildi<min) {
    min = gildi;
    indexF=1;
  }
  gildi = best[0].second.second+best[1].second.second+best[2].second.first+best[3].second.second;
  if(gildi<min) {
    min = gildi;
    indexF=2;
  }
  gildi = best[0].second.second+best[1].second.second+best[2].second.second+best[3].second.first;
  if(gildi<min) {
    min = gildi;
    indexF=3;
  }
  
}

int main(){
  int n;
  cin>>n;
  vector< pair<string,dd> > best(4);
  double maxF=10000, maxS=10000;
  for(int i=0; i<n; i++) {
    string name;
    double f,s;
    cin>>name>>f>>s;
    if(i<4) {
      best[i].first = name;
      best[i].second = make_pair(f,s);
    } else {
      sort(best.begin(),best.begin()+4,compareF);
      cout<<endl;
      for(int j=0; j<4; j++) {
        cout<<best[j].first<<" "<<best[j].second.first<<" "<<best[j].second.second<<endl;
      }
      cout<<endl;
      sort(best.begin(),best.begin()+4,compareS);
      for(int j=0; j<4; j++) {
        cout<<best[j].first<<" "<<best[j].second.first<<" "<<best[j].second.second<<endl;
      }
      cout<<endl;
    }
  }
}
