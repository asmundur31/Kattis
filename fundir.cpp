#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
  vector< vector<int> > a(100000);
  map<long long,int> e;
  int q;
  cin>>q;
  long long s,t1,t2;
  int count=0;
  for(int i=0; i<q; i++){
    cin>>s>>t1>>t2;
    bool prentadist=false;
    if(e.find(s)==e.end()){
      e[s]=count;
      count++;
      a[e[s]].push_back(t1);
      a[e[s]].push_back(t2);
      cout<<"Fundur bokadur\n";
    }
    else{
      for(int j=0; j<a[e[s]].size(); j++){
        if(t1<a[e[s]][j] && j%2==0){
          if(t2<a[e[s]][j]){
             cout<<"Fundur bokadur\n";
             a[e[s]].insert(a[e[s]].begin()+j,t1);
             a[e[s]].insert(a[e[s]].begin()+j,t2);
          }
          else cout<<"Starfsmadur er thegar a fundi\n";
          prentadist=true;
          break;
        }
      }
      if(!prentadist){
        a[e[s]].push_back(t1);
        a[e[s]].push_back(t2);
        cout<<"Fundur bokadur\n";
      }
    }
  }
}
