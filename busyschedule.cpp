#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool samanburdur(pair< pair<string,string>,string > i, pair< pair<string,string>,string > j){
  if(i.first.first.compare(j.first.first)>0) return 0;
  else if(i.first.first.compare(j.first.first)<0) return 1;
  else{
    if(stoi(i.first.second)%12!=stoi(j.first.second)%12) return stoi(i.first.second)%12<stoi(j.first.second)%12;
    else return stoi(i.second)<stoi(j.second);
  }
}
int main(){
  int n;
  cin>>n;
  while(n!=0){
    vector< pair< pair<string,string>,string > > tafla;
    string timi, hluti;
    for(int i=0; i<n; i++){
      cin>>timi>>hluti;
      pair< pair<string,string>,string > par = make_pair( make_pair(hluti,timi.substr(0,timi.find(":"))),
                                                          timi.substr(timi.find(":")+1,2));
      tafla.push_back(par);
    }
    sort(tafla.begin(),tafla.begin()+n, samanburdur);
    for(int i=0; i<n; i++){
      cout<<tafla[i].first.second<<":"<<tafla[i].second<<" "<<tafla[i].first.first<<"\n";
    }
    cin>>n;
  }
}
