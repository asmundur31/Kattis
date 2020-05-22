#include<iostream>
using namespace std;
int main(){
  int n;
  int count=1;
  while(cin>>n){
    int max=-1000001;
    int min=1000001;
    int tala;
    for(int i=0; i<n; i++){
      cin>>tala;
      if(tala<min) min=tala;
      if(tala>max) max=tala;
    }
    cout<<"Case "<<count<<": "<<min<<" "<<max<<" "<<max-min<<"\n";
    count++;
  }
}
