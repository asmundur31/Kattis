#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> listi(n);
  for(int i=0; i<n; i++){
    cin>>listi[i];
  }
  int index=0;
  int m=0;
  int min=50;
  for(int i=0; i<n-2; i++){
    m=max(listi[i],listi[i+2]);
    if(m<min){
      min=m;
      index=i;
    }
  }
  cout<<index+1<<" "<<min<<"\n";
}
