#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,p;
  cin>>n>>p;
  vector<int> f(n);
  for(int i=0; i<n; i++){
    cin>>f[i];
    f[i]-=p;
  }
  int max=-10000;
  int sum=0;
  for(int i=0; i<n; i++){
    sum+=f[i];
    if(sum>max) max=sum;
    if(sum<0) sum=0;
  }
  cout<<max<<"\n";
}
