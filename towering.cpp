#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  vector<int> tolur(6);
  vector<int> haed(2);
  for(int i=0; i<6; i++){
    cin>>tolur[i];
  }
  cin>>haed[0]>>haed[1];
  sort(tolur.begin(),tolur.end());
  int summa;
  for(int i=0; i<6; i++){
    for(int j=i+1; j<6; j++){
      for(int k=j+1; k<6; k++){
        summa=tolur[i]+tolur[j]+tolur[k];
        if(summa==haed[0]){
          cout<<tolur[k]<<" "<<tolur[j]<<" "<<tolur[i];
          for(int b=5; b>-1; b--){
            if(b!=k && b!=i && b!=j){
              cout<<" "<<tolur[b];
            }
          }
          cout<<"\n";
          break;
        }
      }
      if(summa==haed[0]) break;
    }
    if(summa==haed[0]) break;
  }
}
