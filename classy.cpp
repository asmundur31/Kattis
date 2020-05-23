#include<iostream>
#include<string>
#include<queue>
#include<math.h>
using namespace std;
struct CustomCompare{
  bool operator()(const pair<int,string>& lhs, const pair<int,string>& rhs){
    if(lhs.first == rhs.first) return lhs.second.compare(rhs.second)>0;
    return lhs.first > rhs.first;
  }
};
int main(){
  int T;
  cin>>T;
  int n;
  string stada;
  string s;
  for(int i=0; i<T; i++){
    cin>>n;
    priority_queue< pair<int,string>, vector< pair<int,string> >, CustomCompare > folk;
    pair<int,string> par;
    int gildi;
    int l;
    for(int j=0; j<n; j++){
      cin>>s;
      par.second=s;
      cin>>stada;
      cin>>s;
      gildi=0;
      l=9;
      for(int k=stada.length()-1; k>=0; k--){
        if(stada[k]=='-'){
          if(stada.substr(k+1, 5)=="upper") gildi+=2*pow(3,l);
          else if(stada.substr(k+1, 6)=="middle") gildi+=pow(3,l);
          l--;
          stada.erase(stada.begin()+k, stada.end());
        }
        else if(k==0){
          if(stada.substr(k, 5)=="upper") gildi+=2*pow(3,l);
          else if(stada.substr(k, 6)=="middle") gildi+=pow(3,l);
          l--;
        }
      }
      for(int k=0; k<=l; k++){
        gildi+=pow(3,k);
      }
      par.first=-gildi;
      folk.push(par);
    }
    for(int j=0; j<n; j++){
      cout<<folk.top().second.substr(0,folk.top().second.length()-1)<<"\n";
      folk.pop();
    }
    for(int j=0; j<30; j++) cout<<"=";
    cout<<"\n";
  }
}
