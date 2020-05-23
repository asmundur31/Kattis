#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int index, skuld;
  int sum=0;
  int a[n+1];
  for(int i=1; i<=n; i++){
    a[i]=0;
  }
  for(int i=1; i<=n; i++){
    cin>>index>>skuld;
    if(a[i]<skuld){
      sum+=skuld-a[i];
      a[i]=0;
      a[index]+=skuld;
    }
    else{
      a[index]+=skuld;
      a[i]-=skuld;
    }
    for(int j=1; j<=n; j++) cout<<a[j]<<" ";
    cout<<"summa="<<sum<<"\n";
  }
  cout<<sum<<"\n";
}
