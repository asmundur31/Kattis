#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    int k, n;
    cin>>k>>n;
    vector<int> gildi(n);
    for(int j=0; j<n; j++){
      cin>>gildi[j];
    }
    int count=0;
    for(int j=0; j<n; j++){
      for(int l=j+1; l<n; l++){
        if(gildi[j]>gildi[l]) count++;
      }
    }
    cout << k << " " << count << "\n";
  }
}
