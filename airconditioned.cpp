#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int compare(pair<int,int> a, pair<int,int> b){
  if(a.second==b.second) return a.first<b.first;
  return a.second<b.second;
}
int main(){
  int n;
  cin>>n;
  vector<int> gildi(200);
  vector< pair<int,int> > mork(n);
  int x,y;
  int max=0;
  for(int i=0; i<n; i++){
    cin>>x>>y;
    mork[i].first=x-1;
    mork[i].second=y-1;
    if(max<y-1) max=y-1;
    for(int j=mork[i].first; j<=mork[i].second; j++){
      gildi[j]+=1;
    }
  }
  sort(mork.begin(),mork.begin(),compare);
  int count=0;
  int k=0;
  while(!mork.empty()){
    int index=0;
    max=0;
    for(int i=0; i<max; i++){
      if(max<gildi[i]){
        max=gildi[i];
        index=i;
      }
    }
    cout<<"mörk "<<mork[k].first<<" "<<mork[k].second<<endl;
    while(mork[k].first<=index){
      for(int i=mork[k].first-1; i<mork[k].second; i++){
        gildi[i]-=1;
      }
      mork.erase(mork.begin()+k);
      k++;
    }
    count++;
    cout<<endl;
    cout<<index<<endl;
    cout<<endl;
    for(int i=0; i<mork.size(); i++) cout<<mork[i].first<<" "<<mork[i].second<<endl;
  }
  cout<<count<<"\n";
}
