#include<iostream>
using namespace std;
int naestafrumtala(int n){
  n++;
  for(int i=2; i<n; i++){
    if(n%i == 0){
      n++;
      i=2;
    }
    else{
      continue;
    }
  }
  return n;
}
int main(){
  int n,b;
  cin>>n>>b;
  if(n>b) cout<<"impossible\n";
  else{
    int naest = naestafrumtala(n*(n-1)/2+n-1);
    if(b<naest-(n-1)-2) cout<<"impossible\n";
    else{
      int a[n];
      for(int i=0; i<n-(naest-(n-1)); i++){
        a[i]=i+1;
      }
      for(int i=n-(naest-(n-1)); i<n; i++){
        a[i]=i+2;
      }
      for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          cout<<a[(j+i)%n]<<" ";
        }
        cout<<"\n";
      }
    }
  }
}
