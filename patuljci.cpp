#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> dvergar(9);
  int sum=0;
  for(int i=0; i<9; i++){
    cin>>dvergar[i];
    sum+=dvergar[i];
  }
  sum-=100;
  for(int i=0; i<9; i++){
    for(int j=i+1; j<9; j++){
      if(dvergar[i]+dvergar[j]==sum){
        for(int k=0; k<9; k++){
          if(k==i || k==j) continue;
          cout<<dvergar[k]<<"\n";
        }
      }
    }
  }
}
