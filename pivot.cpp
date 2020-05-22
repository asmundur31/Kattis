#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,m;
  cin>>n;
  vector<int> moguleg;
  int max;
  cin>>max;
  moguleg.push_back(max); //fyrsta stak
  for(int i=0; i<n-1; i++){
    cin>>m;
    if(m>max){
      max=m;
      moguleg.push_back(m);
    }
    else{
      int j=0;
      while(j<moguleg.size()){
        if(moguleg[j]>m) moguleg.erase(moguleg.begin()+j);
        else j++;
      }
    }
  }
  cout<<moguleg.size()<<"\n";
}
