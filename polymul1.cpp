#include<iostream>
#include<vector>
using namespace std;
int main(){
  int T;
  cin>>T;
  int n;
  for(int i=0; i<T; i++){
    cin>>n;
    vector<int> p(n+1);
    for(int j=0; j<=n; j++){
      cin>>p[j];
    }
    cin>>n;
    vector<int> q(n+1);
    for(int j=0; j<=n; j++){
      cin>>q[j];
    }
    int a;
    cout<<p.size()+q.size()-2<<"\n";
    for(int j=0; j<=p.size()+q.size()-2; j++){
      a=0;
      for(int k=0; k<=j; k++){
        if(k<p.size() && j-k<q.size()) a+=p[k]*q[j-k];
      }
      cout<<a<<" ";
    }
    cout<<"\n";
  }
}
