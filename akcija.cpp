#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> b(n);
  for(int i=0; i<n; i++) cin>>b[i];
  sort(b.begin(), b.end());
  int sum=0;
  for(int i=1; i<=n; i++){
    if(i%3==0) continue;
    else sum+=b[n-i];
  }
  cout<<sum<<"\n";
}
