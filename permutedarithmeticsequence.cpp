#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int T;
  cin>>T;
  int n;
  for(int i=0; i<T; i++){
    cin>>n;
    vector<int> a(n);
    bool arithm = true;
    bool perarithm = true;
    cin>>a[0];
    cin>>a[1];
    int munur=a[1]-a[0];
    for(int j=2; j<n; j++){
      cin>>a[j];
      if(a[j]-a[j-1]!=munur){
        arithm=false;
      }
    }
    if(arithm) cout<<"arithmetic\n";
    else{
      sort(a.begin(),a.begin()+n);
      munur=a[1]-a[0];
      for(int j=2; j<n; j++){
        if(a[j]-a[j-1]!=munur){
          perarithm=false;
          break;
        }
      }
      if(perarithm) cout<<"permuted arithmetic\n";
      else cout<<"non-arithmetic\n";
    }
  }
}
