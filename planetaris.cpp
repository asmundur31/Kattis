#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n,a;
  cin>>n>>a;
  int summa=a;
  vector<int> sol(n);
  for(int i=0; i<n; i++){
    cin>>sol[i];
  }
  sort(sol.begin(),sol.end());
  int count=0;
  int j=0;
  while(summa>sol[j]){
    if(j<n) count++;
    summa=summa-sol[j]-1;
    j++;
  }
  cout<<count<<"\n";
}
