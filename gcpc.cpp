#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int,pair<int,int> > iii;
typedef vector<iii> viii;
bool mysort(iii a, iii b){
    if(a.first>b.first) return 1;
    else if(a.first==b.first){
      if(a.second.first<b.second.first) return 1;
    }
    return 0;
}
int main(){
  int n,m;
  cin>>n>>m;
  int lid, refsing;
  viii utkoma(n);
  for(int i=0; i<n; i++) utkoma[i]=make_pair(0,make_pair(0,i+1));
  for(int i=0; i<m; i++){
    cin>>lid>>refsing;
    for(int j=0; j<n; j++){
      if(utkoma[j].second.second==lid){
        utkoma[j].first++;
        utkoma[j].second.first+=refsing;
        break;
      }
    }
    sort(utkoma.begin(),utkoma.begin()+n,mysort);
    int saeti=0;
    while(utkoma[saeti].second.second!=1) saeti++;
    cout<<saeti+1<<"\n";
  }
}
