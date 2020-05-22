#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<double> gas(n);
  for(int i=0; i<n; i++) cin>>gas[i];
  sort(gas.begin(), gas.begin()+n);
  bool imp = false;
  if(gas[n-1]>n) cout<<"impossible\n";
  else{
    double min = 1.0;
    double s;
    for(double i=1; i<=n; i++){
      s=gas[i-1]/i;
      if(s > 1){
        imp = true;
        break;
      }
      if(min>s){
        min=s;
      }
    }
    if(imp) cout<<"impossible\n";
    else cout<<min<<"\n";
  }
}
